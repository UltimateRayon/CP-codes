    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        string s;
        cin >> s;
     
        char ch=s[0];
        if(ch>=97 and ch<=122)
        {
            ch-=32;
        }
        s[0]=ch;
        cout << s;
    }