#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string n;
    cin>>n;
    if(n.length() == 2) cout<<n[1]<<endl;
    else {
        sort(n.begin(), n.end());
        cout<<n[0]<<endl;
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