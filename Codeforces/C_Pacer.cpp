#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    int t;
    cin >> t;
    while(t--) {
        ll n, m;
        cin >> n >> m;
        ll q, p, currTurn=0, currSide=0, pts=0;
        ll arr[n][n];
        for(ll i=0; i<n; i++) {
            cin >> q >> p;
            ll turn=q-currTurn;
            if(turn%2==0) {
                if(currSide==p) {pts+=turn;}
                else {pts+=turn-1;}
            } else {
                if(currSide!=p) {pts+=turn;}
                else {pts+=turn-1;}
            }
            currSide=p;
            currTurn=q;
        }
        //cout << "points without last: "<<pts << endl;
        pts+=m-currTurn;
        cout << pts << endl;
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