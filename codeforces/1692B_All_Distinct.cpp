#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, input;
    map<int, int>mp;

    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>input;
        mp[input]++;
    }
    int ans = 0;
   for(auto it = mp.begin(); it != mp.end(); ++it )
    {
      ans += (it->second - 1);
    }
    if(ans % 2) {
        cout<<n - (ans - 1) - 2<<endl;
    }
    else cout<<n - ans<<endl;
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
