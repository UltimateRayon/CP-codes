#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    int t;
    cin >> t;
    vector<int> sol(1e5+1, -1);
    //int lastUser=0;
    for(int i=1; i<=t; i++) {
        int x , k;
        cin >> x >> k;
        //if(k-lastUser<0) {cout << "NO"; return;}
        //lastUser=k;
        if(x<=sol[k]) {continue;} 
        else if(x-1==sol[k]) {sol[k]=x;}
        else {cout << "NO"; return;}
    }
    cout << "YES";
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