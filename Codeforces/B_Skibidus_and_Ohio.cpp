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
            //int size2=size;
            int isone=0;
            for(int i=size-1; i>0; i--)
            {
                if(s[i]==s[i-1]) {isone=1;}//{size2=size-i; break;}
            }
            if(isone==0)
            {cout << size << endl;}
            else {cout << 1 << endl;}
        }
    }