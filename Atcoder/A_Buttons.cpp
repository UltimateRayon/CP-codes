#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if((2*a)-1 > (2*b)-1 and (2*a)-1 > a+b) cout << (2*a)-1;
    else if((2*b)-1 > (2*a)-1 and (2*b)-1 > a+b) cout << (2*b)-1;
    else cout << a+b;
}