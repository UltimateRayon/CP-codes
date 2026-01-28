    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        string s;
        cin >> s;
     
        size_t size=s.size();
        int count=0, i;
     
        for(i=0; i<size; i++)
        {
            if(s[i]==0) {continue;}
            for(int j=i+1; j<size; j++)
            {
                if(i==j) {continue;}
                if(s[i]==s[j]) {s[j]=0;}
            }
            count++;
        }
        if(count%2==0) {cout << "CHAT WITH HER!";}
        else {cout << "IGNORE HIM!";}
    }