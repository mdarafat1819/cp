#include <bits/stdc++.h>

using namespace std;

int path[100][100];

int MCM(int dim[], int n) {

    int res[n + 1][n + 1];

    for(int i = 1; i <= n; i++) res[i][i] = 0;

    for(int len = 2; len <= n; len++) {
        for(int i = 1; i <= n - len + 1; i++) {
            int j  = i + len - 1;
            res[i][j] = INT_MAX;
            for(int k = i; k < j; k++) {
                int q = res[i][k] + res[k + 1][j] + dim[i - 1] * dim[k] * dim[j];

                if(q < res[i][j]) {
                    res[i][j] = q;
                    path[i][j] = k;
                }
            }
        }
    }
    return res[1][n];
}

void OptimalParens(int i, int j, string chain) {
    if(i == j) {
        cout<<chain[i - 1];
        return;
    }
    cout<<"(";
    OptimalParens(i, path[i][j], chain);
    OptimalParens(path[i][j] + 1, j, chain);
    cout<<")";
}

void solve()
{
    string chain = "ABCDEF";
   // int dim[] = {30, 35, 15, 5, 10, 20, 25};
    int dim[] = {40, 20, 30, 10, 30};

    cout << MCM(dim, 4) << endl;
    OptimalParens(1, 4, chain);
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