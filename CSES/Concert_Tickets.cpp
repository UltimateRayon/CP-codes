#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"
 
void Solve()
{
    ll n, m;
    cin >> n >> m;
    multiset<ll> ticket; 
    ll people[m];
    for(ll i=0; i<n; i++) {
        ll q;
        cin >> q;
        ticket.insert(q);
    }
    //sort(ticket.begin(), ticket.end());
    for(ll i=0; i<m; i++) {
        cin >> people[i];
        auto ans=ticket.upper_bound(people[i]);
        if(ans==ticket.begin()) {
            cout << -1 << endl;
        }
        else {
            //auto it=ticket.begin()+ans;
            cout << *--ans << endl;
            ticket.erase(ans);
            //cout << ticket.size();
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