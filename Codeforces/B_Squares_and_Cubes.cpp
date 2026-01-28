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
        ll n;
        cin >> n;
        set<ll> s;
        for(ll i=1; i<=sqrt(n); i++) {
            if(i*i<=n) {s.insert(i*i);}
            if(i*i*i<=n) {s.insert(i*i*i);}
        }
        cout << s.size() << endl;
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