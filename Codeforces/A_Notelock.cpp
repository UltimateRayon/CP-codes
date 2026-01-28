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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt=0;
        int i=0;
        int ptc=0;
        while(i<n) {
            if(s[i]=='1' and ptc==0) {
                cnt++;
                ptc=k;
            }
            if(s[i]=='1') {
                ptc=k;
            }
            i++;
            if(ptc>0) {
                ptc--;
            }
        }
        cout << cnt << endl;
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