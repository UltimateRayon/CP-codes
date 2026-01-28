#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    int n, m;
    cin >> n >> m;
    double price=INT_MAX;
    for(int i=0; i<n; i++) {
        double money, apple;
        cin >> money >> apple;
        price=min(price, money/apple);
    }
    cout << fixed << setprecision(8) << m*price << endl;;
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