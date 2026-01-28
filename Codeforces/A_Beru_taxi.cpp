#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

struct point{
    long double x;
    long double y;
    long double t;
};

long double distance_time(point car, double xt, double yt) {
    return sqrt(pow(car.x-xt, 2)+pow(car.y-yt, 2))/car.t;
}

void Solve()
{
    long double xt, yt, tt;
    cin >> xt >> yt >> tt;
    vector<point> cars;
    while(tt--) {
        long double x, y, t;
        cin >> x >> y >> t;
        cars.push_back({x, y, t});
    }
    long double ans=INT_MAX;
    for(point car: cars) {
        ans=min(ans, distance_time(car, xt, yt));
    }
    cout << fixed << setprecision(10) << ans << endl;
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