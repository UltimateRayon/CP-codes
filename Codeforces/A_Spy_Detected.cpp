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
            int n;
            cin >> n;
            int arr[n];
            for(int i=0; i<n; i++)
            {
                cin >> arr[i];
            }
            if(arr[0]!=arr[1] and arr[1]==arr[2]) {cout << 1 << endl;}
            else if(arr[0]!=arr[1] and arr[1]!=arr[2]) {cout << 2 << endl;}
            else if(arr[0]==arr[1] and arr[1]!=arr[2]) {cout << 3 << endl;}
            else
            {
                for(int i=3; i<n; i++)
                {
                    if(arr[i]!=arr[2]) {cout << i+1 << endl; break;}
                }
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