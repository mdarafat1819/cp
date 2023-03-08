#include <bits/stdc++.h>

using namespace std;

void solve()
{
   int n, x, y, l_x = 0, r_x = 0, u_y = 0, d_y = 0;
    cin>>n;
    while(n--) {
        cin>>x>>y;
        if(x > 0) r_x = max(r_x, x);
        else l_x = max(l_x, abs(x));
        if(y > 0) u_y = max(u_y, y);
        else d_y = max(d_y, abs(y));
    }
    cout<<2 * l_x + 2 * r_x + 2 * d_y + 2 * u_y<<endl;

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