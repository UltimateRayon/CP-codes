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
        vector<int> candies(n);
        for(int &x: candies) {cin >> x;}
        ll ans=0, cnt=0, i=0, j=n-1;
        ll alice=0, bob=0;
        while(i<=j) {
            if(alice<bob) {
                alice+=candies[i];
                i++, cnt++;
            }
            else if(bob<alice) {
                bob+=candies[j];
                j--, cnt++;
            }
            else {
                ans=cnt;
                alice+=candies[i];
                i++, cnt++;
            }
        }
        if(alice==bob) {ans=cnt;}
        cout << ans << endl;
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