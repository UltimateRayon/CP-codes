#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    ll n;
    cin >> n;
    if(n==1) {cout << 1 << endl; return;}
    else if(n<=3) {cout << n*(n-1) << endl; return;} 
    ll ans=INT_MIN;
    for(ll i=n-2; i>=1; i--) {
        
        if(gcd(i, n)==1 and gcd(i, n-1)==1) {
            ans=max(ans, n*(n-1)*i); break;
        }
    }
    if(n%2==0) {n--;}
    for(ll i=n-2; i>=1; i--) {
        
        if(gcd(i, n)==1 and gcd(i, n-1)==1) {
            ans=max(ans, n*(n-1)*i); break;
        }
    }
    cout << ans << endl;
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