    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int t;
        cin >> t;
        while(t--)
        {
            int n, i;
            cin >> n;
            if(n%2==0) {cout << -1 << "\n";}
            else
            {
                int arr[n]; 
                for(i=0; i<n/2+1; i++)
                {
                    arr[i]=i*2+1;
                    cout << arr[i] <<" ";
                }
                for(int j=0; j+i<n; j++)
                {
                    arr[i+j]=j*2+2;
                    cout << arr[i+j] <<" ";
                }
            }
        }
    }