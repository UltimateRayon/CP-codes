    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
     
        int t;
        cin >> t;
     
        while(t--)
        {
            int n, ans=0;
            cin >> n;
            int mount[n][n];
     
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    cin >> mount[i][j];
                }
            }
            for(int diff=-(n+1); diff<=n-1; diff++)
            {
                int max=0;
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(i-j==diff)
                        {
                            max=min(max, mount[i][j]);
                        }
                    }
                }
                ans+=(-max);
            }
            cout << ans << "\n";
        }
    }