#include <bits/stdc++.h>

using namespace std;

vector<int>sum_subset;

void sumOfSubsets(int arr[], int idx, int n, int sum) {

    if(idx >= n) {
        sum_subset.push_back(sum);
        return;
    }
    
    sumOfSubsets(arr, idx + 1, n, sum + arr[idx]);
    sumOfSubsets(arr, idx + 1, n, sum);
}

void solve()
{
    sum_subset.clear();
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];

    sumOfSubsets(arr, 0, n, 0);
    sort(sum_subset.begin(), sum_subset.end());
    // int ans = 1;
    // for(int i = 0; i < sum_subset.size(); i++) {
    //    if(ans == sum_subset[i]) {
    //     ans++;
    //    }
    // }
    // cout<<ans<<endl;

    for(int i = 0;  i < sum_subset.size(); i++) {
        cout<<sum_subset[i]<<" ";
    }
    cout<<endl;


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