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
        int n;
        cin >> n;
        int q, max1=0, max2=0;
        for(int i=0; i<n; i++){
            cin >> q;
            if(q>max2){
                if(q>max1) {
                    max2=max1;
                    max1=q;
                } else {
                    max2=q;
                }
            }
        }
        cout << max1+max2 << endl;
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