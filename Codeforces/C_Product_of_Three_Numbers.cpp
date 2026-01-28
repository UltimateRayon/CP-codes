#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"

void Solve()
{
    //sieve();
    int t;
    cin >> t;
    while(t--) {
        ll n;
        bool flag=0;
        set<ll> num;
        cin >> n;
        for(int i=2; i<sqrt(n)+1; i++) {
            if(n%i==0) {
                num.insert(i);
                n/=i;
                if(num.size()==2) {
                    num.insert(n);
                    flag=1; break;
                }
            }
        }
        if(flag and num.size()==3) {
            cout << "YES\n";
            for(int x: num) {cout << x <<" ";}
            cout << endl;
        }
        else {cout << "NO\n";}
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