    #include <bits/stdc++.h>
     
    using namespace std;
     
    #define ll long long
    #define Yes cout<<"Yes\n"
    #define No cout<<"No\n"
    #define endl "\n"
     
    void Solve()
    {
        int n, m;
        cin >> n >> m;
     
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(i%2==0) {cout << "#";}
                else if((i+1)%4==0) 
                {
                    if(j==0) {cout << "#";}
                    else {cout << ".";}
                }
                else
                {
                    if(j==m-1) {cout << "#";}
                    else {cout << ".";}
                }
            }
            cout << endl;
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