#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

struct Point {
    int x;
    int y;
};


void Solve()
{
    vector<Point> points;
    for(int i=0; i<8; i++) {
        int x, y;
        cin >> x >> y;
        points.push_back({x, y});
    }
    sort(points.begin(), points.end(), [](const Point &a, const Point &b) {
        return (a.x != b.x) ? (a.x < b.x) : (a.y < b.y);
    });
    bool isValid=true;
    if(points[0].x!=points[1].x or points[1].x!=points[2].x) {isValid=false;}
    if(points[3].x!=points[4].x) {isValid=false;}
    if(points[5].x!=points[6].x or points[6].x!=points[7].x) {isValid=false;}

    if(points[0].y!=points[3].y or points[3].y!=points[5].y) {isValid=false;}
    if(points[1].y!=points[6].y) {isValid=false;}
    if(points[2].y!=points[4].y or points[4].y!=points[7].y) {isValid=false;}
    for(int i=0; i<8-1; i++) {
        for(int j=i+1; j<8; j++) {
            if(points[i].x==points[j].x and points[i].y==points[j].y) {
                isValid=false;
                break;
            }
        }
    }
    for(auto [x, y]: points) {
        cout << x << " " << y << endl;
    }
    if(isValid) {cout << "respectable" << endl;}
    else {cout << "ugly" << endl;}
}

void Optimization()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

signed main()
{
    Optimization();
    Solve();
}