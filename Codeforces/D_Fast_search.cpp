    #include <bits/stdc++.h>
     
    using namespace std;
    // 1 3 4 10 10
    int rbinarySearch(int key, vector<int>& arr, int n)
    {
        int start=0;
        int end=n;
        int ans=n;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(arr[mid]>=key) {ans=mid; end=mid-1;}
            else {start=mid+1;}
            //cout << "r->"<<ans<<endl;
        }
        return ans-1;
    }
     
    int lbinarySearch(int key, vector<int>& arr, int n)
    {
        int start=0;
        int end=n-1;
        int ans=n;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(arr[mid]>=key) {ans=mid; end=mid-1;}
            else {start=mid+1;}
            //cout << "l->"<< ans <<endl;
        }
        return ans;
    }
     
    int main()
    {
        int n, k;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        
        cin >> k;
        while(k--)
        {
            int l, r;
            cin >> l >> r;
            int lpos=lbinarySearch(l, arr, n);
            int rpos=rbinarySearch(r+1, arr, n);
            //cout << lpos << " "<<rpos<<endl;
            cout << rpos-lpos+1 << " ";
        }
    }