    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int t;
        cin >> t;
        while(t--)
        {
            long long int n, x, cnt=0;
            cin >> n >> x;
            long long int arr[n];
            vector<long long int> v;
            for(long long int i=0; i<n; i++)
            {
                cin >> arr[i];
                if(arr[i]>=x) {cnt++;}
                else {v.push_back(arr[i]);}
            }
            sort(v.begin(), v.end(), greater<>());
            long long int mini=v[0];
            int serial=0;
            for(long long int i=0; i<v.size(); i++)
            {
                mini=min(mini, v[i]);
                serial++;
                if(serial*mini>=x) {cnt++; serial=0, mini=INT64_MAX;}
            }
            cout << cnt << "\n";
        }
    }