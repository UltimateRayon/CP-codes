    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
     
        int t;
        cin >> t;
        start:
        while(t--)
        {
            int n, i, j, x;
            cin >> n;
            vector<int> num;
            int result=n-2, sq=sqrt(result);
            for(i=0; i<n; i++)
            {
                cin >> x;
                num.push_back(x);
            }
            sort(num.begin(), num.end());
            for(i=0; num[i]<=sq; i++)
            {
                if(result%num[i]==0)
                {
                    for(j=n-1; num[j]>=result/num[i]; j--)
                    {
                        if(num[i]*num[j]==result) {cout << num[i] <<" "<<num[j] << "\n"; goto start;}
                    }
                }
            }
        }
    }