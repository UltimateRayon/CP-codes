#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"
#define multi 1.000000011

void Solve()
{
    double n, t;
    cin >> n >> t;
    double res=n;
    
    printf("%0.6f", n*pow(multi, t));
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