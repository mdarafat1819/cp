#include <bits/stdc++.h>

using namespace std;

long long sumOfSubArray(int arr[], int n) {
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        ans += (arr[i] * (n - i) * (i + 1));
    }
    return ans;
}

long long sumOfSubArray2(int arr[], int n) {
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        long long temp_sum = 0;
        for(int j = i; j < n; j++) {
            temp_sum += arr[j];
            sum += temp_sum;
        }
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4};

    cout<<sumOfSubArray(arr, 3)<<endl;
    cout<<sumOfSubArray2(arr, 4)<<endl;
    return 0;
}