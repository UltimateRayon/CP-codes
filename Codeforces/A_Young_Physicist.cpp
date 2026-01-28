    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int n;
        cin >> n;
        
        int sumi=0, sumj=0, sumk=0, a;
        while(n--)
        {
            cin >> a;
            sumi+=a;
            cin >> a;
            sumj+=a;
            cin >> a;
            sumk+=a;
        }
        if(sumi==0 and sumj==0 and sumk==0) {cout << "YES";}
        else {cout << "NO";}
    }