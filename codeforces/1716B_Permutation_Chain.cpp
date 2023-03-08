#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k, sq = 1;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) arr[i] = sq++;
    cout<<n<<endl;
    for(int i = n - 1; i >= 0; i--) {
        for(int j = 0; j < n; j++) {
           cout<<arr[j]<<" ";
        }
        cout<<endl;
        if(i != 0) swap(arr[i], arr[i - 1]);
    }

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