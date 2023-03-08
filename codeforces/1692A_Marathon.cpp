#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b, c, d, ans = 0;
    cin>>a>>b>>c>>d;
    if(a < b) ans++;
    if(a < c) ans++;
    if(a < d) ans++;
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