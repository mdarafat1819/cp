#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int i = 0, j = 1, ans = 0;
    while(i < n && j < n) {
        if(arr[j-1] < 2 * arr[j] && (j - i == k)) {
            //cout<<i<<" "<<j<<" "<<ans + 1<<endl;
            ans++;
            i++;
            j++;
        }
        else if(arr[j-1] < 2 * arr[j] && (j - i < k)) j++; 
        else {
            i = j;
            j++;
        }
    }
    cout<<ans<<endl;
    
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