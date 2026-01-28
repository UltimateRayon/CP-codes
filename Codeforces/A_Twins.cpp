#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes";
#define No cout<<"No";
#define endl "\n"

void Solve()
{
    int n;
    cin >> n;
    int arr[n], sum=0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    sort(arr, arr+n, greater<int>());
    int side=0, cnt1=0;
    int start=0, end=n;
    while(start<end)
    {
        int main=0;
        int mid=(start+end+1)/2;
        for(int i=0; i<mid; i++)
        {
            main+=arr[i];
        }
        side=sum-main;
        if(main>side) {end=mid-1;}
        else {start=mid;}
    }
    cout << start+1 << endl;
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