#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m, k;
    cin>>n>>m>>k;

    int applicants_needs[n], free_appartment[m];

    for(int i = 0; i < n; i++) cin>>applicants_needs[i];
    for(int i = 0; i < m; i++) cin>>free_appartment[i];

    sort(applicants_needs, applicants_needs + n);
    sort(free_appartment, free_appartment + m);

    int ans = 0, i = 0, j = 0;

    while(i < n && j < m) {
        if(abs(applicants_needs[i] - free_appartment[j]) <= k) {
            i++;
            j++;
            ans++;
        }
        else if(free_appartment[j] - applicants_needs[i] > k) i++;
        else j++;
    }
    cout<<ans<<endl;
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