#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"
#define num 9

ll palindrome_generator(int i) {
    string m=to_string(i);
    string n=to_string(i);
    reverse(n.begin(), n.end());
    return stoll(m+n);
}

void Solve()
{
    int k;
    ll p;
    cin >> k >> p;
    ll sum=0;
    for(int i=1; i<=k; i++) {
        ll pal=palindrome_generator(i);
        sum+=pal;
    } 
    ll res=sum%p;
    cout << res;
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