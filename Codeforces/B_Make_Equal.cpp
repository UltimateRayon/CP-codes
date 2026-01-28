#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    int t;
    cin >> t;
    while(t--) {
        int n, flag=0;;
        cin >> n;
        int arr[n], sum=0;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            sum+=arr[i];
        }
        int level=sum/n;
        int bucket=0;
        for(int i=0; i<n; i++) {
            if(arr[i]>level) {bucket+=arr[i]-level;}
            else if(arr[i]==level) {continue;}
            else if(arr[i]<level and bucket+arr[i]>=level) {bucket-=level-arr[i];}
            else {flag=1; break;}
        }
        if(bucket!=0) {flag=1;}
        (flag)? No: Yes;
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