#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    int city, time;
    cin >> city >> time;
    vector<int> fuel(city), road(city);
    for(auto &x: road) {cin >> x;}
    for(auto &x: fuel) {cin >> x;}

    int i=0;
    int currFuel=fuel[0];
    int mfuel=0;
    int ans=0;
    while(i<city) {
        mfuel=max(mfuel, fuel[i]);
        if(currFuel>=road[i]) {
            ans+=road[i];
            currFuel-=road[i];
            i++;
            currFuel+=fuel[i];
        }
        else {
            ans+=time;
            currFuel+=mfuel;
        }
    }
    cout << ans << endl;
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