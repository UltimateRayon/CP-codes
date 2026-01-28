#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    ll pc, task;
    cin >> pc >> task;
    vector<ll> server(pc+1, 0);
    ll t[task], sneed[task], tneed[task];

    for(ll i=0; i<task; i++) {
        cin >> t[i] >> sneed[i] >> tneed[i];
    }
    
    int lastTime=0;
    for(int time=0; time<task; time++) {
        for(int i=1; i<=pc; i++) {
            server[i]=(server[i]-(t[time]-lastTime)>0)?server[i]-(t[time]-lastTime) : 0;
        }
        //cout << server[3] << endl;
        bool isBusy=true;
        int av=0;
        for(int i=1; i<=pc; i++) {
            if(server[i]!=0) {continue;}
            av++;
        } 
            if(av>=sneed[time]) {
                isBusy=false;
                int cnt=0;
                int target=sneed[time];
                int i=1, idx=0;
                while(idx<target) {
                    if(server[i]==0) {
                        cnt+=i;
                        server[i]=tneed[time];
                        idx++;
                    }
                    i++;
                }
                cout << cnt << endl;
        }
        if(isBusy) {cout << -1 << endl;}
        lastTime=t[time];
    }
}

void Optimization()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    Optimization();
    Solve();
}