#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char ch;
    string s;
    for(int i=0; i<26; i++)
    {
        cin >> n;
        ch = 96+n;
        s.push_back(ch);
    }
    cout << s;
}