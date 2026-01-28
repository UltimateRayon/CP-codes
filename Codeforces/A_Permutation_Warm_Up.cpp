#include <bits/stdc++.h>

using namespace std;

#define ll long long
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
        n--;
        while(n>0)
        {
            sum+=n;
            n-=2;
        }
        sum*=2;
        cout << (sum/2)+1 << endl;
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