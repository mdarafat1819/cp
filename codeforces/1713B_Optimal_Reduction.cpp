#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int input;
        cin>>input;
        mp[input]++;
    }
    if(n == mp.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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