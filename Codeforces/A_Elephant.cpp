    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int x;
        cin >> x;
        int result;
        if(x%5==0) {result=x/5;}
        else {result=x/5+1;}
        
        cout << result;
    }