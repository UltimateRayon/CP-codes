#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define endl "\n"

void Solve()
{
    int qu, n;
    cin >> qu;
    vector<int> q(qu);
    for(auto &x: q) {cin >> x;}
    cin >> n;
    vector<int> items(n);
    for(auto &x: items) {cin >> x;}
    sort(q.begin(), q.end());
    sort(items.begin(), items.end(), greater<>());
    bool last=false;
    int rem=n, pos=0, i=0;
    ll total=0;
    while(rem!=0) {
        int curr=q[0];
        if(rem-q[0]>=2) {curr+=2;}
        else if(rem-q[0]==1) {curr+=1;}
        //cout << curr << endl;
        if(rem-curr<0) {
            last=true;
            break;
        }
        int norm=q[0];
        //cout << norm << endl;
        while(i<curr+pos) {
            if(norm>0)
            {total+=items[i]; norm--;}
            rem--;
            i++;
        }
        pos=i;
    }
    if(last) {
        int idx=0;
        for(int j=1; j<qu; j++) {
            if(rem-q[j]>2) {idx=j;}
            else if(rem-q[j]==2 or rem-q[j]==1 or rem-q[j]==0) {
                idx=j;
                break;
            }
            break;
        }
        if(idx==0) {
            int norm=q[0];
            int bonus=0;
            while(i<n) {
                if(norm--) {
                    total+=items[i];
                }
                else if(bonus) {
                    bonus--;
                    if(bonus==0) {norm=q[0];}
                }
                i++;
            }
        }
        else {
            int norm=q[idx];
            while(i<n) {
                if(norm--) {
                    total+=items[i];
                }
                i++;
            }
        }
    }
    cout << total << endl;
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