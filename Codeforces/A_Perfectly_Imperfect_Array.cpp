    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int t;
        cin >> t;
     
        while(t--)
        {
            int n, isvalid=0;
            cin >> n;
            long long int arr[n];
            for(int i=0; i<n; i++)
            {
                cin >> arr[i];
                long long int ans=sqrt(arr[i]);
                long long int res=pow(ans, 2);
                //cout << res << endl;
                if(res!=arr[i]) {isvalid=1;}
            }
            if(isvalid) {cout << "YES\n";}
            else {cout << "NO\n";}
        }
    }