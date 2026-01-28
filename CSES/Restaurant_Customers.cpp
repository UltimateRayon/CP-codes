#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"
 
void Solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for(ll i=0; i<n; i++) {
        ll arrive, leave;
        cin >> arrive >> leave;
        v.push_back({arrive, 1});
        v.push_back({leave, -1});
    }
    sort(v.begin(), v.end());
    ll maxsum=0, sum=0;
    for(ll i=0; i<v.size(); i++) {
        ll j=i;
        while(j<v.size() and v[j].first==v[i].first){
            //cout << i << " "<<j<< endl;
            sum+=v[j].second;
            j++;
        }
        maxsum=max(maxsum, sum);
        i=j-1;
    }
    cout << maxsum << endl;
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