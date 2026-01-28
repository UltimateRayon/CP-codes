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
        while(t--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            if(a+b==c or a+c==b or b+c==a) {Yes;}
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