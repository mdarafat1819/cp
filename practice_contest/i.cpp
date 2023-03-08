#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    long long sum = 0, input, ans = 0;
    map<long long, long long>mod;
    for(int i = 0; i < n; i++) {
        cin>>input;
        sum += input;
        mod[abs(sum) % k]++;
    }
    for(auto x : mod) {
        ans += ((x.second * (x.second - 1)) / 2);
    }
    ans += mod[0];
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