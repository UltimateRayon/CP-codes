#include <bits/stdc++.h>

using namespace std;

#define Yes cout<<"Yes";
#define No cout<<"No";

void Solve()
{
    int n;
    cin >> n;
    float x=0, y=0, x1, y1;
    long double dist=0;
    for(int i=0; i<n; i++)
    {
        cin >> x1 >> y1;
        dist+=sqrt(pow(x1-x, 2)+pow(y1-y, 2));
        x=x1; y=y1;
    }
    dist+=sqrt(pow(x1, 2)+pow(y1, 2));
    cout << fixed << setprecision(7) << dist;
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