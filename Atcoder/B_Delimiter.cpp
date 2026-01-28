#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, num[100];
    for(n=0; ; n++)
    {
        cin >> num[n];
        if(num[n]==0){break;}
    }
    
    for(n; n>=0; n--)
    {
        cout << num[n] << endl;
    }
}