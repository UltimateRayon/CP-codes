    #include <iostream>
    using namespace std;
     
    int fibonacci(int a, int b, int n)
    {
    	if(a+b==n) {return b;}
    	else {return fibonacci(b, a+b, n);}
    }
     
    int main()
    {
    	int n;
    	cin >> n;
    	if(n==0) {cout << 0 << " " << 0 << " " << 0; return 0;}
    	int a=fibonacci(0, 1, n);
    	cout << 0 << " " << n-a << " " << a;
    }