#include <bits/stdc++.h>

using namespace std;

#define Yes cout<<"Yes";
#define No cout<<"No";
#define endl "\n"

void Solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int sum=0;
        for(int i=0; i<n; i+=2)
        {
            sum=sum*2+2;
        }
        cout << sum << endl;
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