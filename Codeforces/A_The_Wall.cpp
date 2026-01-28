#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    int x, y;
    ll a, b;
    cin >> x >> y >> a >> b;
    int l=(x*y)/gcd(x, y);
    ll low=l*ceil((double)a/l); // 6*2=12
    ll high=l*(b/l); // 6*3=18
    ll cnt=(high-low)/l;
    if(low%l==0) {cnt++;}
    cout << cnt << endl;
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