    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int t, r, c[5];
        char ch;
        cin >> t;
     
        while(t--)
        {
            cin >> r;
            int result[r];
     
            for(int i=0; i<r; i++)
            {
                for(int j=0; j<4; j++)
                {
                    cin >> ch;
                    if(ch=='#') {result[i]=j+1;}
                }
            }
            for(int i=r-1; i>=0; i--)
            {
                cout << result[i] << " ";
            }
            cout << "\n";
        }
        return 0;
    }