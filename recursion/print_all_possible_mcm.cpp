#include <bits/stdc++.h>

using namespace std;

void PrintMcm(int start, int end, string mat, int len, string ans) {

    for(int i = start; i <= end; i++) {
        cout<<mat[i];
    }
    cout<<endl;
    for(int k = start; k < end; k++) {
       // cout<<mat[k];
        //ans += "(";
        //ans.push_back(mat[k]);
        PrintMcm(start, k, mat, len, ans);
        //ans.push_back(')');
       // ans.push_back('(');
        PrintMcm(k + 1, end, mat, len,ans);
       // ans.push_back(')');
    }
  
}

void solve()
{
    string mat = "ABCD";
    string ans;
    PrintMcm(0, 3, mat, 3, ans);
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