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
            int n;
            cin >> n;
            int numbers[n], count=0;
            for(int i=0; i<n; i++)
            {
                cin >> numbers[i];
            }
     
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(i==j) {continue;}
                    
                    if(numbers[i]==numbers[j]) 
                    {
                        if(numbers[j]==-1) {continue;}
                        else {count++; numbers[i]=-1; numbers[j]=-1;}
                    }
                        
                }
            }
            cout << count << endl;
        }
    }