    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int big=0, small=0;
        string s;
        cin >> s;
     
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='a' and s[i]<='z') {small++;}
            else {big++;}
        }
        if(small>=big)
        {
            for(int i=0; i<s.size(); i++)
            {
                cout << (char)tolower(s[i]);
            }
        }
        else
        {
            for(int i=0; i<s.size(); i++)
            {
                cout << (char)toupper(s[i]);
            }
        }
    }