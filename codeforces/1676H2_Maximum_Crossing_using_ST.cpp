#include <bits/stdc++.h>

using namespace std;

int query(int tree[], int idx, int left, int right, int q_left, int q_right) {
    if(q_right < left || right < q_left) return 0;
    if(q_left <= left && right <= q_right) return tree[idx];

    int mid = left + (right - left) / 2;
    int x = query(tree, 2 * idx, left, mid, q_left, q_right);
    int y = query(tree, 2 * idx + 1, mid+1, right, q_left, q_right);
   
    return x + y;
}

void update(int tree[], int idx, int left, int right, int pos) {
    if(left == right) {
        tree[idx] += 1;
        return;
    }
    int mid = left + (right - left) / 2;
    if(pos <= mid) update(tree, 2 * idx, left, mid, pos);
    else update(tree, 2 * idx + 1, mid + 1, right, pos);
    tree[idx] = tree[2 * idx] + tree[2 * idx + 1];
}

void solve()
{
    long long n, ans = 0, x;
    cin>>n;
    int tree[4 * n];
    memset(tree, 0, sizeof(tree));

     for(int i = 0; i < n; i++)  {
         cin>>x;
         ans += query(tree, 1, 1, n, x, n);
         update(tree, 1, 1, n, x);
     }
    cout<<ans<<endl;
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