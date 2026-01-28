#include <bits/stdc++.h>

using namespace std;
int maximum(int n,int wood[])
{
    
    int maximum= wood[0];
    for(int i=0; i<n; i++)
    {
        maximum = max(maximum, wood[i]);
    }
    return maximum;
}
int main()
{
    int n, l, count=0;
   
    cin >> n >> l;
    int wood[n];
    for(int i=0; i<n; i++)
    {
        cin >> wood[i];
    }
    int maxi= maximum(n, wood);
    int result, total=0;
    
    
    for(; l<=maxi; l++)
    {
        for(int i=0; i<n; i++)
        {
            count=count+(wood[i]/l);
        }
        total = max(total, count*l);
        count=0;
    }
    cout << total;
    return 0;
}