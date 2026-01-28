    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
     
        int t;
        cin >> t;
     
        while(t--)
        {
            int n, total=0, i;
            cin >> n;
            
            for(i=1; ; i++)
            {
                if(i%2==0)
                {
                    total+=(2*i)-1;
                    if(total>n) {cout << "Kosuke\n"; break;}
                }
                else
                {
                    total-=(2*i)-1;
                    if(total<(-n)) {cout << "Sakurako\n"; break;}
                }
            }
        }
    }