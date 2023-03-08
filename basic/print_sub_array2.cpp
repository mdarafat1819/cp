#include <bits/stdc++.h>

using namespace std;

void subArray1(int arr[], int n) {
    for(int len = 0; len < n; len++) {
        for(int s_idx = 0; s_idx < (n - len); s_idx++) {
            for(int e_idx = s_idx; e_idx <= (s_idx + len); e_idx++) {
                cout<<arr[e_idx]<<" ";
            }
            cout<<endl;
        }
    }
}

void subArray2(int arr[], int n) {
    for(int s_idx = 0; s_idx < n; s_idx++) {
        for(int len = s_idx; len < n; len++) {
            for(int e_idx = s_idx; e_idx <= len; e_idx++) {
                cout<<arr[e_idx]<<" ";
            }
            cout<<endl;
        }
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    subArray1(arr, 4);
    return 0;
}