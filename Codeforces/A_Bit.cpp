#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count=0;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s; 
        cout << endl;
        if(s=="++X" || s=="X++"){count++;}
        else {count--;}
    }
    cout << count;
}