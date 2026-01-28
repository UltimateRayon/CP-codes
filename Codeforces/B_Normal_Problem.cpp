    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int t;
        cin >> t;
     
        while(t--)
        {
            string a, b="";
     
            cin >> a;
            int size=a.size();
     
            for(int i=0; i<size; i++)
            {
                if(a[size-i-1]=='p') {b+='q';}
                else if(a[size-i-1]=='q') {b+='p';}
                else {b+='w';}
            }
            cout << b << endl;
        }
    }