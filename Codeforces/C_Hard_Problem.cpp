    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int t;
        cin >> t;
     
        while(t--)
        {
            int m, a, b, c;
            cin >> m >> a >> b >> c;
     
            int count=0, ar, br;
     
            if(a<m) {count+=a; ar=m-a;}
            else {count+=m; ar=0;}
     
            if(b<m) {count+=b; br=m-b;}
            else {count+=m; br=0;}
     
            if(ar+br>0)
            {
                if(c<ar+br) {count+=c;}
                else {count+=ar+br;}
            }
     
            cout << count << endl;
        }
    }