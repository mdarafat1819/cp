#include <bits/stdc++.h>

using namespace std;

int knapsack(int wt[], int val[], int cp, int n) {
    if(cp == 0 || n == 0) return 0;
    if(wt[n-1] > cp) return knapsack(wt, val, cp, n - 1);
    return max(
        knapsack(wt, val, cp, n - 1),
        val[n-1] + knapsack(wt, val, cp - wt[n - 1], n - 1)
    );
}

int main() {

    int wt[] = {10, 15, 40};
    int val[] = {1, 2, 3};
    int cp = 50;

    cout<<knapsack(wt, val, cp, 3)<<endl;

    return 0;
}