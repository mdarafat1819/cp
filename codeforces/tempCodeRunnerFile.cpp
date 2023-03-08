#include <bits/stdc++.h>

using namespace std;

void solve()
{
    
    int m, current_row = 1, current_col = 1, next_row, next_col;
    cin>>m;
    long long arr[2][m], ans1 = 0, ans2 = 0, ans3 = 0;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < m; j++) {
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < 2; i++) {
        if(i == 0) {
            for(int j = 1; j < m; j++) {
                if(ans1 < arr[i][j]) ans1 = arr[i][j] + 1;
                else ans1++;
            }
        }
        else {
            for(int j = m - 1; j >= 0; j--) {
                if(ans1 < arr[i][j]) ans1 = arr[i][j] + 1;
                else ans1++;
            }
        }
    }

     for(int i = 1; i >= 0; i--) {
        if(i == 1) {
            for(int j = 0; j < m; j++) {
                if(ans2 < arr[i][j]) ans2 = arr[i][j] + 1;
                else ans2++;
            }
        }
        else {
            for(int j = m - 1; j > 0; j--) {
                if(ans2 < arr[i][j]) ans2 = arr[i][j] + 1;
                else ans2++;
            }
        }
    }
    
    for(int i = 0; i < m; i++) {
        if(i % 2 == 0) {
            if(ans3 < arr[0][i] && i) ans3 = arr[0][i] + 1;
            else ans3++;
            if(ans3 < arr[1][i]) ans3 = arr[1][i] + 1;
            else ans3++;
        }
        else {
             if(ans3 < arr[1][i]) ans3 = arr[0][i] + 1;
            else ans3++;
            if(ans3 < arr[0][i]) ans3 = arr[0][i];
            else ans3++;
        }
    }
    //cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    cout<<min(ans1, min(ans2, ans3))<<endl;
}

int main()
{
    //freopen("D:\\c++\\cp\\input.txt", "r", stdin);
    //freopen("D:\\c++\\cp\\output.txt", "w", stdout);

    int t; cin>>t; while(t--)
    //int t, cs = 1; cin>>t; while(cs <= t) cout<<"Case "<<cs<<": ", cs++,
    solve();

    return 0;
}