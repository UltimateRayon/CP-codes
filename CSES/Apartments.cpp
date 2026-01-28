#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"
 
void Solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int demand[n], available[m];
    for(int i=0; i<n; i++) {
        cin >> demand[i];
    }
    for(int i=0; i<m; i++) {
        cin >> available[i];
    }
    sort(demand, demand+n);
    sort(available, available+m);
    int cus=0, apt=0, cnt=0;
    while(cus<n and apt<m) {
        if(demand[cus]+k<available[apt]) {
            cus++;
        } else if(demand[cus]-k>available[apt]) {
            apt++;
        } else {
            cus++;
            apt++;
            cnt++;
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