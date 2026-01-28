    #include <iostream>
    using namespace std;
    int main() {
        int n, zero=0, one=0;
        char temp;
        cin >> n;
        char arr[n];
     
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        if(arr[0]=='0'){zero++; temp='0';}
        else{one++; temp='1';}
     
        for(int i=1; i<n; i++)
        {
            if(arr[i]==temp) {continue;}
            else if(arr[i]=='0') {zero++; temp='0';}
            else{one++; temp='1';}
     
        }
    if(one<=zero) {cout << one;}
    else {cout << zero;}
        return 0;
    }