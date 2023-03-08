#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, a, b;
    cin>>n;
    
    vector<pair<int, bool>> entry_leave;

    for(int i = 0; i < n; i++) {
        cin>>a>>b;
       entry_leave.push_back({a, true});
       entry_leave.push_back({b, false});
    }

    sort(entry_leave.begin(), entry_leave.end());

    int ans = 0, max_ans = 0;

    for(int i = 0; i < 2 * n; i++) {
        if(entry_leave[i].second == true) {
            ans++;
            max_ans = max(max_ans, ans);
        }
        else ans--;
    }
    cout<<max_ans<<endl;

}

int main()
{
    //freopen("D:\\c++\\cp\\input.txt", "r", stdin);
    //freopen("D:\\c++\\cp\\output.txt", "w", stdout);

    //int t; cin>>t; while(t--)
    //int t, cs = 1; cin>>t; while(cs <= t) cout<<"Case "<<cs<<": ", cs++,
    solve();

    return 0;
}