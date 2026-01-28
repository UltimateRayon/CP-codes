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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int jelly=min(a, c);
        int flow=min(b, d);
        if(flow>jelly) {
            cout << "Flower\n";
        } else {
            cout << "Gellyfish\n";
        }
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