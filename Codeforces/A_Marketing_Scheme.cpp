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
        ll l, r;
        cin >> l >> r;
        //if(r-l==2) {No; continue;}
        bool flag=false;
        for(ll i=max(1LL, r/2); i<=r+1; i++) {
            if(i<=r and r/2>=l) {i=r; continue;}
            if(i>r/2+1 and i<=r) {i=r; continue;}
            ll newl, newr;
            newl=l%i;
            newr=r%i;
            //cout << i << " "<<newl<<" "<<newr << endl;;
            if(newl>=(double)i/2 and newr>=(double)i/2) {
                flag=true; 
                //cout << i << endl;
                break;
            }
        }
        if(flag) {Yes;}
        else {No;}
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