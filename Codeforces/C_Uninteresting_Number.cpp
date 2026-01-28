    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int t;
        cin >> t;
        while(t--)
        {
            string s;
            cin >> s;
            int size=s.size();
            int ans=0, two=0, three=0, valid=0;
            for(int i=0; i<size; i++)
            {
                ans+=s[i]-'0';
                if(s[i]=='2') {two++;}
            else if(s[i]=='3') {three++;}
            }
            for(int j=0; j<=two; j++)
            {
                for(int k=0; k<=three; k++)
                {
                    int result=ans+(2*j)+(6*k);
                    if(result%9==0) {valid=1;}
                }
            }
            if(valid==1) {cout << "YES\n";}
            else {cout << "NO\n";}
        }
    }