#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, l, x;
    cin>>n>>l>>x;
    cout<<min(l, n - l) * x<<endl;
}

int main()
{
    //freopen("D:\\c++\\cp\\input.txt", "r", stdin);
    //freopen("D:\c++\cp\output.txt", "w", stdout);

    int t; cin>>t; while(t--)
    //int t, cs = 1; cin>>t; while(cs <= t) cout<<"Case "<<cs<<": ", cs++,
    solve();

    return 0;
}