#include <bits/stdc++.h>

using namespace std;

int fibo(int n, int a, int b)
{
    if(n == 0) return a;
    if(n == 1) return b;
    n -= 1;
    return fibo(n, b, a + b);
}

int fibo(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {

    cout<<fibo(5)<<endl;
    cout<<fibo(6, 0, 1);
    return 0;
}