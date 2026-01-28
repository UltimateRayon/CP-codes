#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"
#define limit 2500

vector<bool> primes(limit+1, true);

void prime_checker() {
    primes[0]=primes[1]=false;
    for(int i=2; i*i<=limit; i++) {
        if(primes[i]) {
            for(int j=i*2; j<=limit; j+=i) {
                primes[j]=false;
            }
        }
    }
}

void Solve()
{
    prime_checker();
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> pfx(n+1, vector<int>(m+1, 0));
    for(int i=1; i<n+1; i++) {
        for(int j=1; j<m+1; j++) {
            char q;
            cin >> q;
            if(q=='1') {pfx[i][j]=pfx[i][j-1]+1;}
            else {pfx[i][j]=pfx[i][j-1];}
        }
    }
    ll result=INT_MAX;
    for(int p=2; p<=limit; p++) {
        if(!primes[p]) {continue;}
        ll cnt=0;
        for(int i=1; i<n+1; i+=p) {
            for(int j=1; j<m+1; j+=p) {
                int x=i;
                int oneb=0, zerob=0;
                while(x<i+p) {
                    int one, zero;
                    if(x>n) {one=0; zero=p;}
                    else {
                        if(j+p-1>m) {
                            one=pfx[x][m]-pfx[x][j-1];
                        }
                        else {
                            one=pfx[x][j+p-1]-pfx[x][j-1];
                        }
                        zero=p-one;
                    }
                    x++;
                    oneb+=one;
                    zerob+=zero;
                    //cout << oneb << " "<<zerob<<endl;
                }
                cnt+=min(oneb, zerob);
                if(cnt>=result) {break;}
            }
            if(cnt>=result) {break;}
        }
        result=min(result, cnt);
    }
    cout << result;
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