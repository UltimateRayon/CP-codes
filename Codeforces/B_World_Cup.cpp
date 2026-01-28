#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    int n;
    cin >> n;
    ll arr[n];
    ll mini=1e9+1;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        mini=min(mini, arr[i]);
    }
    ll cut=mini/n;
    //cout << cut << endl;
    if(cut) {
        for(int i=0; i<n; i++) {
            arr[i]-=cut*n;
        }
    }
    while(1) {
        for(int i=0; i<n; i++) {
            if(arr[i]-i<=0) {
                cout << i+1 << endl;
                return;
            }
            arr[i]-=n;
        }
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