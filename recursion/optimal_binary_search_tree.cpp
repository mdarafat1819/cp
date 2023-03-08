#include <bits/stdc++.h>

using namespace std;

double p[] = {0, 0.15, 0.1, 0.05, 0.1, 0.2};
double q[] = {0.05, 0.10, 0.05, 0.05, 0.05, 0.1};

double path[100][100], cost[100][100];

double OptimalBST(int i, int j, int lavel)
{
    if (i == j)
    {
        // cout<<i<<" "<<j<<" "<<cost[i][j]<<endl;
        path[i][j] = i;
        double temp = p[i] * lavel + q[i - 1] * (lavel + 1) + q[i] * (lavel + 1);
        if(i == 2) {
            cout<<cost[i][j]<<" "<<lavel<<" "<<temp<<endl;
        }
        return cost[i][j] = temp; // min(cost[i][j], temp);
    }

    for (int k = i; k <= j; k++)
    {
        double temp_cost;
        if (i == k)
        {
            temp_cost = p[i] * lavel + q[i - 1] * (lavel + 1) + OptimalBST(k + 1, j, lavel + 1);
        }
        else if (k == j)
        {
            temp_cost = p[k] * lavel + OptimalBST(i, k - 1, lavel + 1) + q[k] * (lavel + 1);
        }
        else
        {
            temp_cost = p[k] * lavel + OptimalBST(i, k - 1, lavel + 1) +
                        OptimalBST(k + 1, j, lavel + 1);
        }

        if(temp_cost < cost[i][j]) {
            cost[i][j] = temp_cost;
            path[i][j] = k;
        }
    }
    return cost[i][j];
}

void PrintPath(int i, int j)
{
    if (i <= j)
    {
        cout<<i<<" "<<j<<endl;
        cout << path[i][j] << endl;
        PrintPath(i, path[i][j] - 1);
        PrintPath(path[i][j] + 1, j);
    }
}
void solve()
{
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            cost[i][j] = INT_MAX;
        }
    }

    cout << OptimalBST(1, 5, 1) << endl;
    // cout<<path[1][5]<<endl;
    PrintPath(1, 5);
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