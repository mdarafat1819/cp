#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string input, orginal = "hznu";
    cin>>input;
    int ans = 0;
    if(input.length() > orginal.length()) {
        int i = 0, j = orginal.length();
        string res = input.substr(0, j);
        while(j < n) {
            if(res == orginal) ans++;
            
        }
    }
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