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
        if(n%2==0)
        {
            cout << 2025;
            for(int i=4; i<n; i++)
            {
                cout << 0;
            }
        }
        else
        {
            cout << 42025;
            for(int i=5; i<n; i++)
            {
                cout << 0;
            }
        }
        cout << endl;
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