#include <bits/stdc++.h>

using namespace std;

int RodCut(int price[], int n) {
    int res[n + 1];
    int path[n + 1];
    res[0] = 0;

    for(int i = 1; i <= n; i++) {
        int temp_ans = -1;
        for(int j = 1; j <= i; j++) {
           //temp_ans = max(temp_ans, price[j] + res[i - j]);
            if(temp_ans < price[j] + res[i - j]) {
                temp_ans = price[j] + res[i - j];
                path[i] = j;
            }
        }
        res[i] = temp_ans;
    }
    //To print table
    for(int i = 0; i<= n; i++) cout<<res[i]<<" ";
    cout<<endl;
    //To print path
    int tem_n = n;
    while(n > 0) {
        cout<<path[n]<<" ";;
        n -= path[n];
    }
    cout<<endl;
    return res[tem_n];
}

void solve()
{

    int price[] = {0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    
    cout<<RodCut(price, 9)<<endl;
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