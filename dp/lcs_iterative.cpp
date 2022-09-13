#include <bits/stdc++.h>

using namespace std;

int Lcs(string x, string y, int m, int n) {
    int lcs[100][100];
    for(int i = 0; i <= m; i++) {
        for(int j = 0; j <= n; j++) {
            if(i == 0 || j == 0) {
                lcs[i][j] = 0;
            }
            else if(x[i - 1] == y[j - 1]) {
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            }
            else {
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
            }
        }
    }
    //print lcs table
    // for(int i = 0; i <= m; i++) {
    //     for(int j = 0; j <= n; j++) {
    //         cout<<lcs[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //print lcs path
    int index = lcs[m][n];
    string lcs_path(index, '\0');

    int i = m, j = n;

    while(i && j) {
        if(x[i - 1] == y[j - 1]) {
            lcs_path[--index] = x[i - 1];
            i--;
            j--;
        }
        else if(lcs[i - 1][j] < lcs[i][j - 1]) j--;
        else i--; 
    }

    cout<<lcs_path<<endl;

    return lcs[m][n];
}

void solve()
{
    // string x = "AGGTAB";
    // string y = "GXTXAYB";
    string x = "ABCWEDEUY";
    string y = "ZXBWDUYL";
    // string x = "AB";
    // string y = "DE";
    // string x = "ACADB";
    // string y = "CBDA";

    cout<<Lcs(x, y, x.length(), y.length())<<endl;
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