#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> group;
    int black=0;
    for(int i=0; i<n; i++) {
        if(s[i]=='B') {
            black++;
        }
        else if(s[i]=='W' and black!=0) {
            group.push_back(black);
            black=0;
        }
    }
    if(black!=0) {
        group.push_back(black);
    }
    cout << group.size() << endl;
    for(int x: group) {
        cout << x << " ";
    }
    cout << endl;
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