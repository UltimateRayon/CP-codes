    #include <bits/stdc++.h>
    using namespace std;
     
    #define endl "\n"
    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define fraction() cout.unsetf(ios::floatfield); cout.precision(10);cout.setf(ios::fixed, ios::floatfield);
    #define mem(a, b) memset(a, b, sizeof(a))
     
     
    int main() {
        int n, m;
        cin >> n >> m;
     
        vector<long long> a;
        long long total = 0;
     
        for (int i = 0; i < n; ++i) {
            long long c, t;
            cin >> c >> t;
            total += c * t;
            a.push_back(total);
        }
     
        vector<long long> b(m);
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }
     
        int song = 0;
        for (int i = 0; i < m; ++i) {
            while (b[i] > a[song]) {
                song++;
            }
            cout << song + 1 << '\n';
        }
     
        return 0;
    }