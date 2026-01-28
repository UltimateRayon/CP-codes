    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        string s, s1="";
        cin >> s;
        int size=s.length();
     
        for(int i=0; i<size; i++)
        {
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U' or s[i]=='Y' or s[i]=='y')
            {
                continue;
            }
            else if(s[i]+0<96)
            {
                s1+='.';
                s1+=s[i]+32;
            }
            else
            {
                s1+='.';
                s1+=s[i];
            }
        }
        cout << s1;
    }