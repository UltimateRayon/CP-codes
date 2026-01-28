#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int k=0;
    cin >> s;
    int n= s.size();

    if(s[0]=='<' and s[n-1]=='>')
    {
        for(int i=1; i<n-1; i++)
        {
           if(s[i]=='=') {k++;}
        }
        if(k+2==n) {cout << "Yes";}
        else {cout << "No";}
    }
    else {cout << "No";}
}