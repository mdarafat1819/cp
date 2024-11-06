#include <bits/stdc++.h>

using namespace std;

long memo[1 << 13][13];
int m[13][13];

long minimumCost(int mask, int curr_idx, int n) {
    if(mask == (1 << n) - 1) {
        return m[curr_idx][0];
    }
    if(memo[mask][curr_idx] != -1) return memo[mask][curr_idx];

    long temp = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(!(mask & (1 << i))) {
            temp = min(temp, minimumCost(mask | (1 << i), i, n) + m[curr_idx][i]);
        }
    }
    memo[mask][curr_idx] = temp;
    return temp;
}

int main() {
    freopen("input.txt", "r", stdin);
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin>>m[i][j];
            }
        }
        memset(memo, -1, sizeof(memo));
        cout<<minimumCost(1, 0, n)<<endl;
    }
    return 0;
}