#include <bits/stdc++.h>

using namespace std;

#define Yes cout<<"Yes";
#define No cout<<"No";
#define endl "\n"

void Solve()
{
    int t;
    cin >> t;
    for(int tc=1; tc<=t; tc++)
    {
        int n; cin >> n;
        int m; cin >> m;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        // for(int i=0; i<n; i++)
        // {
        //     cout << arr[n]<<" ";
        // }
        // cout <<endl;

        int start=1, end=1e9;
        while(start+1<end)
        {
            int mid=start+(end-start+1)/2;
            //cout <<"mid: "<<mid<<endl;
            int rem=1;
            int dist=0;
            bool flag=0;
            for(int i=0; i<n; i++)
            {
                if(arr[i]>mid) 
                {
                    flag=1;
                    //cout <<"flag"<<endl;
                    break;
                }
                if(dist+arr[i]<=mid)
                {
                    dist+=arr[i];
                }
                else
                {
                    //cout <<"dist: "<<dist<<endl;
                    rem++;
                    dist=arr[i];
                }
            }
            if(flag==0 and rem<=m)
            {
                end=mid;
            }
            else
            {
                start=mid;
            }
        }
        cout << "Case "<<tc<< ": "<<end<<endl;
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