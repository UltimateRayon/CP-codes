#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char current='A';
    int posi=0, posf=0;
    int count=0;
    for(int i=0; i<26; i++)
    {
        if(s[i]==current) {posi=i+1; current++; break;} 
    }
    for(int i=0; i<26; i++)
    {
        if(s[i]==current) 
        {
            posf=i+1;
            count+=abs(posf-posi); 
            posi=posf;
            i=-1;
            current++;
        }
    }
    cout << count;
}