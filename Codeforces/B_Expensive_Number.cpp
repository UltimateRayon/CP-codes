#include <bits/stdc++.h>

using namespace std;

#define Yes cout<<"Yes";
#define No cout<<"No";

void Solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        string num;
        cin >> num;
        int size=num.size();
        int number[size];
        for(int i=0; i<size; i++)
        {
            number[i]=num[i]-'0';
        }
        int last=size-1;
        int lastzero=0;
        while(last>=0)
        {
            if(number[last]==0) {lastzero++; last--;}
            else {break;}
        }
        //cout << lastzero<<endl;
        int first=0, firstzero=0;
        while(first<last)
        {
            if(number[first]!=0) {firstzero++;}
            first++;
        }
        cout << firstzero+lastzero<<"\n";
    }
}

void Optimization()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    Optimization();
    Solve();
}