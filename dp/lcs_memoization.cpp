#include <bits/stdc++.h>

using namespace std;

int lcs[100][100];
int LcsMemo(string x, string y, int m, int n, int lcs[][100]) {
  
    if(m == 0 || n == 0) return lcs[m][n] = 0;

    if(x[m - 1] == y[n - 1]) {
        if(lcs[m - 1][n - 1] != -1)
             return lcs[m][n] = 1 + lcs[m - 1][n - 1];

        return lcs[m][n] = 1 + LcsMemo(x, y, m - 1, n - 1, lcs);
    }
    if(lcs[m][n] != -1) return lcs[m][n];

    int res1, res2;
    if(lcs[m - 1][n] != -1) res1 = lcs[m - 1][n];
    else res1 = LcsMemo(x, y, m - 1, n, lcs);

    if(lcs[m][n - 1] != -1) res2 = lcs[m][n - 1];
    else res2 = LcsMemo(x, y, m, n - 1, lcs);
    
    return lcs[m][n] = max(res1, res2);
}

void solve()
{
    int lcs[100][100];
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            lcs[i][j] = -1;
        }
    }

    // string x = "AGGTAB";
    // string y = "GXTXAYB";
    string x = "ABCWEDEUY";
    string y = "ZXBWDUYL";
    // string x = "AB";
    // string y = "DE";
    cout<<LcsMemo(x, y, x.length(), y.length(), lcs)<<endl;
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