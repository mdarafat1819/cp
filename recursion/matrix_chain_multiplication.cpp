#include <bits/stdc++.h>

using namespace std;

int res[100][100], path[100][100];

int calls;

int Mcm(int i, int j, int dim[])
{
    calls++;
    if (i == j)
        return res[i][j];
    if (res[i][j])
        return res[i][j];

    int temp_ans = INT_MAX;

    for (int k = i; k < j; k++)
    {
        int q = Mcm(i, k, dim) + Mcm(k + 1, j, dim) + dim[i - 1] * dim[k] * dim[j];
        if (q < temp_ans)
        {
            path[i][j] = k;
            temp_ans = q;
        }
    }

    return res[i][j] = temp_ans;
}


void OptimalParens(int i, int j, string chain) {
    if(i == j) cout<<chain[i - 1];

    else {
        cout<<"(";
        OptimalParens(i, path[i][j], chain);
        OptimalParens(path[i][j] + 1, j, chain);
        cout<<")";
    }
}

void solve()
{
    string chain = "ABCDEF";
   // int dim[] = {30, 35, 15, 5, 10, 20, 25};
    int dim[] = {40, 20, 30, 10, 30};

    cout << Mcm(1, 4, dim) << endl;
    cout<<"Calls: "<<calls<<endl;
    OptimalParens(1, 4, chain);
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