#include <bits/stdc++.h>

using namespace std;

#define Yes cout<<"Yes";
#define No cout<<"No";

void Solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a;
        cin >> n;
        int arr[n+1];
        arr[0]=0;
        int amax=0;
        for(int i=1; i<=n; i++)
        {
            cin >> a;
            arr[i]=arr[i-1]+a;
            if(arr[i]>arr[amax]) {amax=i;}
        }
        int m, b;
        cin >> m;
        int brr[m+1];
        brr[0]=0;
        int bmax=0;
        for(int i=1; i<=m; i++)
        {
            cin >> b;
            brr[i]=brr[i-1]+b;
            if(brr[i]>brr[bmax]) {bmax=i;}
        }
        cout << arr[amax]+brr[bmax]<<endl;
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