#include <bits/stdc++.h>

using namespace std;

int calls;
string lcs_ans;

int Lcs(string x, int m, string y, int n, string ans)
{
    calls++;
    //cout << "2^" << m << " 2^" << n << " " << calls << endl;
    if (n == 0 || m == 0)
    {
        if(lcs_ans.length() < ans.length()) 
        lcs_ans = ans;
        return 0;
    }
    if (x[m - 1] == y[n - 1])
    {
        ans.push_back(x[m - 1]);
        return 1 + Lcs(x, m - 1, y, n - 1, ans);
    }
    if (x[m - 1] != y[n - 1])
    {
        return max(
            Lcs(x, m - 1, y, n, ans),
            Lcs(x, m, y, n - 1, ans));
    }
}


void solve()
{
    // string x = "AGGTAB";
    // string y = "GXTXAYB";
    string ans;
    string x = "ABCWEDEUY";
    string y = "ZXBWDUYL";
    // string x = "AB";
    // string y = "DE";
    cout << Lcs(x, x.length(), y, y.length(), ans) << endl;
    cout<<string(lcs_ans.rbegin(), lcs_ans.rend())<<endl;
    cout << "Calls: " << calls << endl;
}

int main()
{
    // freopen("D:\\c++\\cp\\input.txt", "r", stdin);
    // freopen("D:\\c++\\cp\\output.txt", "w", stdout);

    // int t; cin>>t; while(t--)
    // int t, cs = 1; cin>>t; while(cs <= t) cout<<"Case "<<cs<<": ", cs++,
    solve();

    return 0;
}