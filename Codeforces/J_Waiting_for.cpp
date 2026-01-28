    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int n;
        cin >> n;
     
        char name;
        int seat, stand=0, x;
        while(n--)
        {
            cin >> name;
            if(name=='P')
            {
                cin >> x;
                stand+=x;
            }
            else if(name=='B')
            {
                cin >> seat;
                if(stand>=seat) 
                {
                    cout << "NO\n";
                    stand-=seat;
                }
                else
                {
                    cout << "YES\n";
                    stand=0;
                }
            }
        }
    }