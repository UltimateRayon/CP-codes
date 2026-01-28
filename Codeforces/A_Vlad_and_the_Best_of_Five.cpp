#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, acount=0;
    cin >> n;
    char result[n];

    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        for(int j=0; j<5; j++)
        {
            if(s[j]=='A'){acount++;}
        }
        if(acount>=3){result[i]='A';}
        else {result[i]='B';}
        acount=0;
    }
    for(int i=0; i<n; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}