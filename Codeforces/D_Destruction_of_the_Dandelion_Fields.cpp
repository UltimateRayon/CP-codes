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
        ll q, n, sum=0;
        cin >> n;
        vector<ll> odd;
        for(ll i=0; i<n; i++) {
            cin >> q;
            if(q&1==1) {odd.push_back(q);}
            else {sum+=q;}
        }
        //cout << sum << endl;
        if(odd.empty()) {cout << 0 << endl;}
        else {
            sort(odd.begin(), odd.end());
            int i=0, j=odd.size()-1;
            bool isOn=1;
            while(i<=j) {
                if(isOn) {
                    sum+=odd[j];
                    j--;
                    isOn=false;
                }
                else {
                    i++;
                    isOn=true;
                }
            }
            cout << sum << endl;
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