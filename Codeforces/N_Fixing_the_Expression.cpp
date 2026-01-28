    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int t;
        cin >> t;
     
        while(t--)
        {
            char a, b, c;
            cin >> a >> b >> c;
     
            if(a>c) {cout << a <<">"<< c <<"\n";}
            else if(a<c) {cout << a <<"<"<< c <<"\n";}
            else {cout << a <<"="<< c <<"\n";}
        }
    }