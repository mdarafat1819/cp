#include <bits/stdc++.h>

using namespace std;

int calls = 0;

int result[100], path[100];

int RodCut(int price[], int n)
{
    calls++;
    if (result[n] >= 0)
        return result[n];
    if (n == 0)
        return result[n] = 0;
    int temp_ans = -1;

    for (int i = 1; i <= n; i++)
    {
        int q = RodCut(price, n - i);

        if (temp_ans < price[i] + q)
        {
            path[n] = i;
            temp_ans = price[i] + q;
        }
    }
    return result[n] = temp_ans;
}

void solve()
{
    for (int i = 0; i < 100; i++)
        result[i] = -1;

    int price[] = {0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    int n = 9;

    cout << endl
         << RodCut(price, n) << endl;
    // To print path
    while (n > 0)
    {
        cout << path[n] << " ";
        n -= path[n];
    }

    cout << endl
         << calls << endl;
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