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
        ll n, m, x, y;
        cin >> n >> m >> x >> y;
        ll q, cnt=0;
        for(ll i=0; i<n; i++) {
            cin >> q;
            if(q<y) {cnt++;}
        }
        for(ll i=0; i<m; i++) {
            cin >> q;
            if(q<x) {cnt++;}
        }
        cout << cnt << endl;
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