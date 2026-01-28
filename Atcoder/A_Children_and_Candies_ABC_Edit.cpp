#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, candy=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        candy=candy+i;
    }
    cout << candy;
}