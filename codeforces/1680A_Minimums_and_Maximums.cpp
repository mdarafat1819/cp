#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int l1, l2, r1, r2, ans;
    cin>>l1>>r1>>l2>>r2;
    if(l1 >= l2 && l1 <= r2) ans = l1;
    else if(l2 >= l1 && l2 <= r1) ans = l2;
    else ans = l1 + l2;
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