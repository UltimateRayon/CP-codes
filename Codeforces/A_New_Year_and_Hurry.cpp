    #include <bits/stdc++.h>
     
    using namespace std;
     
    #define ll long long
    #define Yes cout<<"Yes\n"
    #define No cout<<"No\n"
    #define endl "\n"
     
    void Solve()
    {
        int n, k;
        cin >> n >> k;
        int rem=240-k;
        int cnt=0;
        for(int i=1; i<=n; i++)
        {
            if(rem-i*5<0) {break;}
            rem-=i*5;
            cnt++;
        }
        cout << cnt << endl;
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