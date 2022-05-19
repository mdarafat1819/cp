#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, q, x, ans;
    cin>>n>>q;
    int arr[n], sum[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    sort(arr, arr + n, greater<int>());
    sum[0] = arr[0];
    for(int i = 1; i < n; i++) sum[i] = sum[i-1] + arr[i];
    //sort(sum, sum + n, greater<int>());
    while(q--) {
        cin>>x;
        if(sum[n-1] < x) ans = -1;
        else ans = lower_bound(sum, sum + n, x) - sum + 1;
        cout<<ans<<endl;
    }
    
}

int main()
{
    //freopen("D:\\c++\\cp\\input.txt", "r", stdin);
    //freopen("D:\\c++\\cp\\output.txt", "w", stdout);

    int t; cin>>t; while(t--)
    //int t, cs = 1; cin>>t; while(cs <= t) cout<<"Case "<<cs<<": ", cs++,
    solve();

    return 0;
}