    #include <bits/stdc++.h>
     
    using namespace std;
     
    #define Yes cout<<"Yes\n";
    #define No cout<<"No\n";
     
    void Solve()
    {
        int t;
        cin >> t;
        while(t--)
        {
            int x, y;
            cin >> x >> y;
            int diff=x-y+1;
            if(diff<0) {No}
            else
            {
     
                int div=diff/9;
                if(div*9==diff) {Yes}
                else {No}
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