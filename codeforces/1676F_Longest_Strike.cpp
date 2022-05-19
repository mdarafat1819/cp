#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int inp, n, k;
    map<int, int> freq;
    map<int, int>::iterator it;
    vector<int> v;
    
    cin>>n>>k;
    for(int i = 0; i < n; i++) {
        cin>>inp;
        freq[inp]++;
    }

    for(it = freq.begin(); it != freq.end(); it++) {
        if(it->second >= k) v.push_back(it->first);
    }
    if(v.size()) {
        int l = 0, r = 0, ans_l = 0, ans_r = 0;
        sort(v.begin(), v.end());
        for(int i = 1; i < v.size(); i++) {
            if(v[i] - v[i-1] == 1) r = i;
            else l = r = i;
            if((ans_r - ans_l) < (r - l)) {
                   ans_l = l;
                   ans_r = r;
               }
        }
        
        cout<<v[ans_l]<<" "<<v[ans_r]<<endl;
    }
    else cout<<"-1"<<endl;
    
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