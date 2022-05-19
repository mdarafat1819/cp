#include <bits/stdc++.h>

using namespace std;

int knapsack(int wt[], int val[], int cp, int n) {
    int dp[n+1][cp+1];

    for(int p = 0; p <= n; p++) {
        for(int w = 0; w <= cp; w++) {
            if(p == 0 || w == 0) dp[p][w] = 0;
            else if(wt[p-1] <= w) dp[p][w] = max(
                val[p-1] + dp[p-1][w - wt[p-1]], dp[p-1][w]
            );
            else dp[p][w] = dp[p-1][w];
        }
    }

    for(int p = 0; p <= n; p++) {
        for(int w = 0; w <= cp; w++) {
            cout<<dp[p][w]<<" ";
        }
        cout<<endl;
    }
    return dp[n][cp];
}

int main()
{
    int wt[] = {3, 2, 1};
    int val[] = {10, 15, 50};
    int cp = 6;

    cout<<knapsack(wt, val, cp, 3)<<endl;
    return 0;
}