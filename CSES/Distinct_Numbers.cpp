#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"
 
void Solve()
{
    int n, q;
    cin >> n;
    set<int> s;
    for(int i=0; i<n; i++) {
        cin >> q;
        s.insert(q);
    }
    cout << s.size();
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