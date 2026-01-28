    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int t;
        cin >> t;
        while(t--)
        {
            int x, y;
            cin >> x >> y;
     
            int count=0, temp=0;
            for(int i=0; i<x; i++)
            {
                string s;
                cin >> s;
                temp+=s.size();
                if(temp<=y) {count++;}
            }
            cout << count <<"\n";
        }
    }