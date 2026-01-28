#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string word;

    cin >> n;

    while(n--)
    {
        cin >> word;
        if(word.length()>10) {cout << word.front() << word.length()-2 << word.back() << endl;}
        else {cout << word << endl;} 
    }
    return 0;
}