    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int n, k;
        cin >> n >> k;
        int cont[n];
     
        for(int i=0; i<n; i++)
        {
            cin >> cont[i];
        }
        int j=1;
        start:
        if(cont[k-j]==0 and k!=j) {j++; goto start;}
        else if(cont[k-j]==0 and k==j) {cout << "0"; return 0;}
        else
        {
        int del= cont[k-j];
        
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(cont[i]>=del) {count++;}
        }
        cout << count;
        return 0;
        }
    }