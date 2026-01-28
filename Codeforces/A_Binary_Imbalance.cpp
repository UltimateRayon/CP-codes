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
        int n;
        char q;
        cin >> n;
        int num[n];
        for(int i=0; i<n; i++)
        {
            cin >> q;
            num[i]=(int)q-'0';
            //cout << num[i];
        }
        bool isPos=0;
        for(int i=0; i<n; i++)
        {
            if(num[i]==0) {isPos=1; break;}
        }
        if(isPos) {cout << "YES\n";}
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