    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        string s, snew;
        cin >> s;
        size_t s_size=s.size();
        int numsize=(s_size/2);
     
        sort(s.begin(), s.end());
         
        for(int i=0; i<s_size; i++)
        {
            if(i&1!=0) {snew+='+';}
            else {snew+=s[numsize]; numsize++;}
        }
        cout << snew;
    }