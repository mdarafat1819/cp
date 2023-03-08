#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, s;
    cin>>n>>s;
    int arr[n], pre_sum[n+1];
    for(int i = 0; i < n; i++) cin>>arr[i];

    pre_sum[0] = 0;
    for(int i = 1; i <= n; i++) {
        pre_sum[i] = pre_sum[i - 1] + arr[i - 1];
    }
    if(pre_sum[n] < s) cout<<"-1"<<endl;
    else {
        int max_len = 1, i = 1, j = 1;
        while(i <= n && j <= n) {
            if(pre_sum[j] - pre_sum[i - 1] < s) j++;
            else if(pre_sum[j] - pre_sum[i - 1] == s) {
                max_len = max(max_len, j - i + 1);
                j++;
            }
            else i++;
        }
        cout<<n - max_len<<endl;
    }
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