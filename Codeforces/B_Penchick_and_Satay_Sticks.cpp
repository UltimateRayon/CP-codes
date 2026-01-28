    #include <bits/stdc++.h>
    using namespace std;
    int arr[200001];
     
    bool Sortable(int n)
    {
        for (int i = 0; i < n - 1; ++i)
        {
     
            if (arr[i] > arr[i + 1])
            {
                if (abs(arr[i] - arr[i + 1]) != 1)
                    return false;
     
     
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
     
     
                if (i > 0)
                    i -= 2;
            }
        }
     
     
        for (int i = 0; i < n; ++i){
            if (arr[i] != i + 1){
                return false;
            }
        }
        return true;
    }
     
    int main()
    {
        int t;
        cin >> t;
     
        while (t--)
        {
            int n;
            cin >> n;
     
            for (int i = 0; i < n; ++i)
                cin >> arr[i];
     
            if (Sortable(n))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
     
     
    }