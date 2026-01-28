#include <bits/stdc++.h>

using namespace std;

#define Yes cout<<"Yes";
#define No cout<<"No";

void Solve()
{
    int n, q, sum=0;;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> q;
        v.push_back(q);
    }

    sort(v.begin(), v.end(), greater<int>());

    while(v[1]!=0)
    {
        v[0]--;
        v[1]--;
        sum++;
        sort(v.begin(), v.end(), greater<int>());
    }
    cout << sum;
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