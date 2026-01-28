#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    ll n;
    cin >> n;
    vector<ll> freq(1e6+1, 0);
    vector<ll> left(1e6+1, 0);
    vector<ll> right(1e6+1, 0);
    ll ans=0, maxf=0, q;
    for(int i=1; i<=n; i++) {
        cin >> q;
        freq[q]++;
            maxf=max(maxf, freq[q]);
            if(left[q]==0) {
                left[q]=i;
                right[q]=i;
            } else {
                right[q]=i;
            }
    }
    //cout << left[1000000] << " "<< right[1000000] << endl;;
    ll mleft=0, mright=n;
    for(int i=1; i<=1e6+1; i++) {
        if(freq[i]==maxf and right[i]-left[i]<mright-mleft) {
            mright=right[i];
            mleft=left[i];
        } 
    }
    cout << mleft << " " << mright << endl;
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