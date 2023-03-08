#include <bits/stdc++.h>

using namespace std;

int Knapsack(int wt[], int val[], int w, int n)
{
    if (n < 0 || w == 0) return 0;
    if (wt[n] > w) return Knapsack(wt, val, w, n - 1);
    int res1 = Knapsack(wt, val, w - wt[n], n - 1) + val[n];
    int res2 = Knapsack(wt, val, w, n - 1);
    return max(res1, res2);
}

int KnapsackDp(int wt[], int val[], int w, int n) {
    int dp[n+1][w+1];
    for(int p = 0; p <= n; p++) {
        for(int cp = 0; cp <= w; cp++) {
            if(p == 0 || cp == 0) dp[p][cp] = 0;
            else if(wt[p - 1] <= cp) {
                dp[p][cp] = max(dp[p - 1][cp - wt[p - 1]] + val[p - 1], dp[p - 1][cp]);
            }
            else dp[p][cp] = dp[p - 1][cp];
        }
    }

    for(int p = 0; p <= n; p++) {
        for(int cp = 0; cp <= w; cp++) {
            cout<<dp[p][cp]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

void solve()
{
    // int wt[] = {3, 2, 1};
    // int val[] = {10, 15, 50};
    // int w = 6;
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int w = 60;
    cout << KnapsackDp(wt, val, w, 3) << endl;
}

int main()
{
    // freopen("D:\\c++\\cp\\input.txt", "r", stdin);
    // freopen("D:\\c++\\cp\\output.txt", "w", stdout);

    // int t; cin>>t; while(t--)
    // int t, cs = 1; cin>>t; while(cs <= t) cout<<"Case "<<cs<<": ", cs++,
    solve();

    return 0;
}