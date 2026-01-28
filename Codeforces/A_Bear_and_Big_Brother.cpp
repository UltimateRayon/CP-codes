#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, i;
    cin >> a >> b;
    for(i=1; i<11; i++)
    {
        if(a*pow(3,i)>b*pow(2,i)){cout << i; return 0;}
    }
    return 0;
}