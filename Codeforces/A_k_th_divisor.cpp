#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    vector<ll> factors;
    ll n, k, cnt=0, odd=0;
    cin >> n >> k;
    //ll sz= (pow(sqrt(n), 2)==n)? sqrt(n) : sqrt(n)+1;
    for(ll i=1; i<=sqrt(n); i++) {
        if(n%i==0 and n/i!=i) {
            factors.push_back(n/i);
            cnt++;
        }
        else if(n%i==0 and n/i==i) {
            factors.push_back(i);
            odd=1;
            break;
        }
        if(cnt==k) {cout << i << endl; return;}
    }
    if(k>2*cnt+odd) {cout << -1 << endl;}
    else {
        //cout << cnt << " " << odd << " " << k << endl;
        cout << factors[(2*cnt+odd)-k] << endl;
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