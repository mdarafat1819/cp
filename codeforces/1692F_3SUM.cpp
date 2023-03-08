#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    map<int, int> fq;
    cin>>n;
    while(n--) {
        int input;
        cin>>input;
        fq[input % 10]++;
    }

    bool ans = false;
    for(int i  = 0; i <= 9; i++) {

        for(int j = 0; j <= 9; j++) {
            for(int k = 0; k <= 9; k++) {
                if((i + j + k) % 10 == 3){
                    map<int, int>temp_fq;
                    temp_fq[i]++;
                    temp_fq[j]++;
                    temp_fq[k]++;
                    int cnt = 0;
                    for(auto it : temp_fq) {
                           if(temp_fq[it.first] <= fq[it.first]) cnt++;
                    }
                    if(cnt == temp_fq.size()) ans = true;
                }
            }
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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
