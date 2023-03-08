#include <bits/stdc++.h>

using namespace std;

vector<string>result;

void GenerateParen(int opn_cnt, int cls_cnt, int n, string paren) {
        if(opn_cnt == n && cls_cnt == n) {
            result.push_back(paren);
            return;
        }
        if(opn_cnt == cls_cnt) {
            paren.push_back('(');
            GenerateParen(opn_cnt + 1, cls_cnt, n, paren);
            return;
        }
        if(opn_cnt == n && cls_cnt < n) {
            paren.push_back(')');
            GenerateParen(opn_cnt, cls_cnt + 1, n, paren);
            return;
        }
        if(opn_cnt < n && cls_cnt < n) {
            //paren.push_back('(');
            GenerateParen(opn_cnt + 1, cls_cnt, n, paren + "(");
           // paren.push_back(')');
            GenerateParen(opn_cnt, cls_cnt + 1, n, paren + ")");
            return;
        }
    }

void solve()
{
    string paren;
    GenerateParen(0, 0, 3, paren);
    cout<<result.size()<<endl;
    for(int i = 0; i < result.size(); i++) {
        cout<<result[i]<<endl;
    }
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