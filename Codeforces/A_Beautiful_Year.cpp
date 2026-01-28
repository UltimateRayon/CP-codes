#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y;
    cin >> y;
    
    for(int i=y+1; i<=9999; i++)
    {
        string temp= to_string(i);

        if(temp[0] != temp[1] && temp[0] != temp[2] && temp[0] != temp[3] && temp[1] != temp[2] && temp[1] != temp[3] && temp[2] != temp[3])
        {cout << i; break;}
    }
    return 0;
}