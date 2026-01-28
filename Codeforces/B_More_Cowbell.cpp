#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> num;
    vector<ll> box(k, 0);
    ll total=0;
    for(ll i=0; i<n; i++) {
        ll q;
        cin >> q;
        num.push_back(q);
        //total+=q;
    }
    //cout << "Here";
    //ll avg=total/n;
    sort(num.begin(), num.end());
    // for(auto x : num) {cout << x << " ";} cout << endl;
    ll i=k-1, cnt=n-1, ans=0;
    while(cnt>=0) {
        while(i>=0 and cnt>=0) {
            box[i]+=num[cnt];
            ans=max(ans, box[i]);
            i--, cnt--;
        }
        if(cnt<0) {break;}
        i++;
        while(i<k and cnt>=0) {
            box[i]+=num[cnt];
            ans=max(ans, box[i]);
            i++, cnt--;
        }
        i--;
    }
    cout << ans;
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