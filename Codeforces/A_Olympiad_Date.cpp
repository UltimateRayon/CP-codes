    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int t;
        cin >> t;
        while(t--)
        {
            int zero=0, one=0, two=0, three=0, five=0, n;
            cin >> n;
            int i=1, q, cnt=0;
            bool isDone=0;
            while(i<=n)
            {
                cin >> q;
                if(q==0) {zero++;}
                else if(q==1) {one++;}
                else if(q==2) {two++;}
                else if(q==3) {three++;}
                else if(q==5) {five++;}
                if(zero>=3 and one>=1 and two>=2 and three>=1 and five>=1) 
                {
                    if(isDone==0) {cnt=i;} 
                    isDone=1;
                }
                i++;
            }
            if(isDone) {cout << cnt << "\n";}
            else {cout << 0 << "\n";}
        }
     
    }