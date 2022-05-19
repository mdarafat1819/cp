#include <bits/stdc++.h>

using namespace std;

void update(int tree[], int idx, int n, int value) {
    while(idx <= n) {
        tree[idx] += value;
        idx += (idx & -idx);
    }
}

int query(int tree[], int idx) {
    int sum = 0;
    while(idx > 0) {
        sum += tree[idx];
        idx -= (idx & -idx);
    }
    return sum;
}

void solve()
{
    long long n, x, ans = 0;
    cin>>n;
    int tree[n + 1];
    memset(tree, 0, sizeof(tree));

    for(int i = 0; i < n; i++) {
        cin>>x;
        ans += (query(tree, n) - query(tree, x - 1));
        update(tree, x, n, 1);
    }
    cout<<ans<<endl;

    //cout<<query(tree, n)<<endl;
}

int main()
{
    freopen("D:\\c++\\cp\\input.txt", "r", stdin);
    //freopen("D:\\c++\\cp\\output.txt", "w", stdout);

    int t; cin>>t; while(t--)
    //int t, cs = 1; cin>>t; while(cs <= t) cout<<"Case "<<cs<<": ", cs++,
    solve();

    return 0;
}