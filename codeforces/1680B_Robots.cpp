#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;
    string cells[n];
    for(int i = 0; i < n; i++) {
        cin>>cells[i];
    }
    vector<int> pos;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(cells[i][j] == 'R') {
                 pos.push_back(j + 1);
                 break;
            }
        }
    }
    int ans = 1;
    for(int i = 1; i < pos.size(); i++) {
        if(pos[0] > pos[i]) {
            ans = 0;
            break;
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    freopen("D:\\c++\\cp\\input.txt", "r", stdin);
    //freopen("D:\\c++\\cp\\output.txt", "w", stdout);

    int t; cin>>t; while(t--)
    //int t, cs = 1; cin>>t; while(cs <= t) cout<<"Case "<<cs<<": ", cs++,
    solve();

    return 0;
}