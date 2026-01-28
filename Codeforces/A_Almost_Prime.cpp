#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    int n;
    vector<int> primes;
    int aprime=0;
    primes.push_back(2);
    primes.push_back(3);

    cin >> n;
    for(int i=4; i<=n; i++) {
        int div=0;
        for(int cnt=0; cnt<primes.size(); cnt++) {
            if(i%primes[cnt]==0) {div++;}
        }
        if(div==0) {primes.push_back(i);}
        else if(div==2) {aprime++;}
    }
    cout << aprime << endl;
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