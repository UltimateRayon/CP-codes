#include <iostream>
#include <climits>
 
#define ll long long
 
using namespace std;
 
int main() {
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0; i<n; i++) {
        cin >> arr[i];
    }
    ll ans=arr[0], maxSum=arr[0];
    for(ll i=1; i<n; i++) {
        ans=max(arr[i], ans+arr[i]);
        maxSum=max(maxSum, ans);
    }
    cout << maxSum << endl;
}