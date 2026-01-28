    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int num, r[5], c[5], result;
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                cin >> num;
                if(num==1) {result= abs(2-i)+abs(2-j);}
            }
        }
        
     
        cout << result;
    }