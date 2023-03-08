#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, i = 1, sqr_of_n;
    cin >> n;
    vector<long long> ans;
    sqr_of_n = sqrt(n) + 1;
    while (i < sqr_of_n)
    {
        if (!(n % i))
        {
            if (n / i == i)
                ans.push_back(i - 1);
            else
            {
                ans.push_back(i - 1);
                ans.push_back(n / i - 1);
            }
        }
        i++;
    }

   sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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