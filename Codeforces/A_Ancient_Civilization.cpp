#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes";
#define No cout<<"No";
#define endl "\n"

void Solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, l;
        cin >> n >> l;
        int words[n], result[l];
        for(int i=0; i<n; i++)
        {
            cin >> words[i];
        }
        for(int j=l-1; j>=0; j--) 
        {
            int i=0, zero=0, one=0;
            while(i<n)
            {
                if(words[i]&1<<j) {one++;}
                else {zero++;}
                i++;
            }
            if(one>zero) {result[l-j-1]=1;}
            else {result[l-j-1]=0;}
        }
        int ans=0;
        for(int j=0; j<l; j++)
        {
            //cout << result[j];
            ans+=pow(2,l-j-1)*result[j];
        }
        cout << ans << endl;
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