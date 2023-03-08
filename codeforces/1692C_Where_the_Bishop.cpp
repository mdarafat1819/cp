#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string input;
    int arr[9][9];
    for(int i = 0; i <= 8; i++)
        for(int j = 0; j <= 8; j++) arr[i][j] = 0;
    for(int i = 1; i <= 8; i++) {
        cin>>input;
        for(int j = 0; j < 8; j++) {
            if(input[j] == '#') {
                arr[i][j + 1] = 1;
            }
        }
    }
    int row, col, flag = 0;
    for(int i = 2; i <= 7; i++) {
        for(int j = 2; j <= 7; j++) {
            if(arr[i - 1][j - 1] && arr[i - 1][j + 1] && arr[i + 1][j - 1] && arr[i + 1][j + 1]) {
                row = i;
                col = j;
                flag = 1;
                break;
            }
        }
        if(flag) break;
    }
    cout<<row<<" "<<col<<endl;
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