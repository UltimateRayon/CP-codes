#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Yes cout << "Yes";
#define No cout << "No";
#define endl "\n"

void Solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll int sz = (n * (n - 1)) / 2;
        vector<ll int> arr(sz);
        ll int result[n], cnt = 0;
        for (ll int i = 0; i < sz; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        n--;
        vector<ll int>::iterator it;
        auto prev = arr.begin();
        while (upper_bound(arr.begin(), arr.end(), *prev) != arr.end())
        {
            it = upper_bound(arr.begin(), arr.end(), *prev);
            // cout << *prev <<"="<<it-prev << endl;
            int count = it - prev;
            // cout << count << endl;

            if (count == n)
            {
                result[cnt++] = *prev;
                n--;
            }
            else
            {
                while (count != 0)
                {
                    count -= n;
                    n--;
                    // cout << *prev << endl;
                    result[cnt++] = *prev;
                    // cout << "inloop\n";
                }
                // result[cnt++]=*prev;
            }
            prev = it;
            // cout << *prev<<endl;
        }
        int count = arr.end() - prev;
        while (count != 0)
        {
            count -= n;
            n--;
            // cout << *prev << endl;
            result[cnt++] = *prev;
            // cout << "inloop\n";
        }
        result[cnt++] = *prev;
        for (ll int i = 0; i < cnt; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
        // cout << *prev <<"="<<it-prev << endl;
    }
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