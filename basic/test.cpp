#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("D:/c++/cp/input.txt", "r", stdin);

    int t, n, arr[1000];
    cin>>t;

    while(t--) {
            cin>>n;
        for(int i = 0; i < n; i++) cin>>arr[i];

        int mx_sum = 0, temp_sum = 0;
        for(int i = 0; i < n; i++) {
            mx_sum += arr[i];
        }

        int pre_sum[n + 1];
        pre_sum[0] = 0;
        pre_sum[1] = arr[0];
        for(int i = 1; i < n; i++) {
            pre_sum[i + 1] = pre_sum[i] + arr[i];
        }
        int cnt = 0;
        for(int i = 0; i < n; i++) {

            for(int j = i; j < n; j++) {
                cnt++;
//                for(int k = i; k <= j; k++) {
//                    temp_sum += abs(arr[i] - arr[j]);
//                }

                temp_sum = (j - i + 1) * (abs(arr[i] - arr[j]));
                mx_sum = max(mx_sum, temp_sum + pre_sum[i] + (pre_sum[n] - pre_sum[j + 1]));
                temp_sum = 0;
            }

        }
        cout<<cnt<<" "<<mx_sum<<endl;
    }

    return 0;
}
