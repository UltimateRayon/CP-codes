#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"
 
void Solve()
{
    ll n, limit;
    cin >> n >> limit;
    ll arr[n];
    for(ll i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    ll i=0, j=n-1, cnt=0;
    while(i<=j) {
        if(i==j) {
            cnt++;
            break;
        } else if(arr[j]+arr[i]<=limit) {
            cnt++;
            i++;
            j--;
        } else {
            cnt++;
            j--;
        }
    }
    cout << cnt;
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