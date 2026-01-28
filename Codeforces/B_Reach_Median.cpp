#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> num(n);
    for(auto &x: num) cin >> x;
    sort(num.begin(), num.end());
    ll mid=n/2;
    unsigned ll cnt=0;
    if(num[mid]==s) {cout << 0 << endl; return;}
    else if(num[mid]<s) {
        while(mid<n) {
            if(num[mid]<s) {
                cnt+=s-num[mid];
                mid++;
            }
            else {break;}
        }
    }
    else {
        while(mid>=0) {
            if(num[mid]>s) {
                cnt+=num[mid]-s;
                mid--;
            }
            else {break;}
        }
    }
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