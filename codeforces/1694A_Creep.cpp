#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b, i = 0, j = 0;
    cin>>a>>b;
    string res;
    while(i < a && j < b) {
        res.push_back('0');
        res.push_back('1');
        i++;
        j++;
    }
    while(i < a) {
        res.push_back('0');
        i++;
    }
    while(j < b) {
        res.push_back('1');
        j++;
    }
    cout<<res<<endl;
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