    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        unsigned long long int n, count=0;
        cin >> n;
        while(n!=0)
        {
            if(n%10==4 or n%10==7) {count++;}
            n/=10;
        }
        if(count==4 or count==7) {cout << "YES";}
        else {cout << "NO";}
    }