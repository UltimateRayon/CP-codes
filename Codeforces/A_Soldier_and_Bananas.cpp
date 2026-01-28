    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int k, n, w, current=0;
        cin >> k >> n >> w;
     
        for(int i=1; i<=w; i++)
        {
            current+=i*k;
        }
        int ans=current-n;
     
        if(ans>0) {cout << ans;}
        else {cout << 0;}
    }