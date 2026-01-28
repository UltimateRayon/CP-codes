#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    int n, p, l, r;
    cin >> n >> p >> l >> r;
    int ans=0;
    if(p>=l and p<=r) {

        if(l!=1 and r!=n) {
            ans+=2;
            ans+=r-l;
            if(p-l<=r-p) {
                ans+=p-l;
            }
            else {
                ans+=r-p;
            }
        }
        else if(l==1 and r!=n) {
            ans+=1;
            ans+=r-p;
        }
        else if(l!=1 and r==n) {
            ans+=1;
            ans+=p-l;
        }
    }
    else if(p<l) {
        ans+=1;
        ans+=l-p;
        if(r!=n) {
            ans+=1;
            ans+=r-l;
        }
    }
    else {
        ans+=1;
        ans+=p-r;
        if(l!=1) {
            ans+=1;
            ans+=r-l;
        }
    }
    cout << ans;
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