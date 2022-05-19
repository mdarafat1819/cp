#include <bits/stdc++.h>

using namespace std;

int dp[100];

int fibo(int n) {
    
    if(n == 1 || n == 0) return 1;
    if(dp[n - 1]) dp[n] = dp[n-1];
    else dp[n] = fibo(n - 1);
    if(dp[n - 2]) dp[n] += dp[n - 2];
    else dp[n] += fibo(n - 2);
    return dp[n];
}

int main() {

    cout<<fibo(11)<<endl;

    return 0;
}