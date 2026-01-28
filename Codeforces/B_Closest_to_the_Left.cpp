    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int n, m;
        cin >> n >> m;
        int arr[n], brr[m];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i<m; i++)
        {
            cin >> brr[i];
        }
        
        for(int i=0; i<m; i++)
        {
            int start=-1;
            int end=n-1;
            int mid;
            while(start<end)
            {
                mid=(start+end+1)/2;
                if(arr[mid]>brr[i]) {end=mid-1;}
                else {start=mid;}
               // cout << start<<" "<<end<<endl;
            }
            cout << start+1 <<"\n";
        }
    }