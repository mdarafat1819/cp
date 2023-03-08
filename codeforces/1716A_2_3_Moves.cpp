#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, ans;
    cin>>n;
    if(n % 3 == 2 || (n > 1 && n % 3 == 1)) ans = n / 3 + 1;
    else if(n % 3 == 1 )  ans = n / 3 + 2;
    else ans = n / 3;
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