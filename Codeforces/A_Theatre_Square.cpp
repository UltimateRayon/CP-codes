#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a;
    long long int result;
    double nn, mm;

    cin >> n >> m >> a;
    nn=ceil((double)n/a);
    mm=ceil((double)m/a);
    result=(int)mm*nn;
    cout << result;
    return 0;
}