#include <bits/stdc++.h>

using namespace std;

#define Yes cout<<"Yes";
#define No cout<<"No";

void Solve()
{
    int n;
    cin >> n;
    long double arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    long double ratio=arr[1]/arr[0];

    for(int i=2; i<n; i++)
    {
        if(arr[i]/arr[i-1]!=ratio) {No; return;}
    }
    Yes;
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