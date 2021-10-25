#include <bits/stdc++.h>

using namespace std;

int idxOfUpper(int arr[], int left, int right, int value){
   while(right >= left){
        int mid = left + (right - left) / 2;
       if(right == left && arr[left] > value) return right;
       if(arr[mid] > value) right = mid;
       else if(arr[mid] <= value) left = mid + 1;
   }
   return -1;
}

void solve()
{
    int n, cnt = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    sort(arr, arr + n);
    for(int i = 0; i < n; i++){
        int idx = idxOfUpper(arr, i, n - 1, arr[i]);
        if(idx >= 0 && (idx > (n - idx))) cnt++;
        else if(idx < 0) cnt++;
    }
    cout<<cnt<<endl;
}

int main()
{
    //freopen("D:\\c++\\cp\\input.txt", "r", stdin);
    //freopen("D:\c++\cp\output.txt", "w", stdout);

    int t; cin>>t; while(t--)
    //int t, cs = 1; cin>>t; while(cs <= t) cout<<"Case "<<cs<<": ", cs++,
    solve();

    return 0;
}