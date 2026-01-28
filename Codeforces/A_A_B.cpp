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
        string s;
        cin >> s;
        int sz=s.size();
        string first="", second="";
        int i=0;
        for(; i<sz; i++) {
            if(s[i]=='+') {
                i++;
                break;
            }
            first+=s[i];
        }
        for(; i<sz; i++) {
            second+=s[i];
        }
        cout << stoi(first)+stoi(second) << endl;
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