#include <bits/stdc++.h>

using namespace std;

int lis(int arr[], int n) {
    int res[n], mx_len = 0;
    for(int i = 0; i < n; i++) res[i] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) {
                res[j] = max(res[i] + 1, res[j]);
            }
        }
    }
    for(int i = 0; i < n; i++) 
    cout<<res[i]<<" ";
    cout<<endl;
    for(int i = 0; i < n; i++) {
        if(mx_len < res[i]) mx_len = res[i];
    }
    return mx_len;
}

int main() {
    //int arr[] = {6, 9, 8, 2, 3, 5, 1, 4, 7};
    int arr[] = {10,9,2,5,3,7,101,18};

    cout<<lis(arr, 8)<<endl;
    return 0;
}