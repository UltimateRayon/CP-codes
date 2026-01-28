#include <bits/stdc++.h>

using namespace std;

#define Yes cout<<"Yes";
#define No cout<<"No";
#define endl "\n"

void Solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, y, sum=0;
        cin >> n;
        int lsum=0, rsum=0, usum=0, dsum=0;
        for(int i=0; i<n; i++)
        {
            cin >> x >> y;
            if(x<0 and x<lsum) {lsum=x;}
            else if(x>0 and x>rsum) {rsum=x;}
            else if(y<0 and y<dsum) {dsum=y;}
            else if(y>0 and y>usum) {usum=y;}
        }
        cout << (abs(lsum)+abs(rsum)+abs(usum)+abs(dsum))*2<<endl;
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