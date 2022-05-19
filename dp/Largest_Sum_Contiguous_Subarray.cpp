#include <bits/stdc++.h>

using namespace std;

int largestSum(int arr[], int n){
    int mx_sum = arr[0], current_sum = arr[0];
    int start_idx = 0, end_idx = 0;

    for(int i = 1; i < n; i++){
        if(current_sum + arr[i] < arr[i]) {
            current_sum = arr[i];
            start_idx = i;
        }
        else current_sum += arr[i];
        if(mx_sum < current_sum) {
            mx_sum = current_sum;
            end_idx = i;
        }
    }
    cout<<start_idx<<" "<<end_idx<<endl;
    return mx_sum;
}

int main()
{
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};

     cout<<largestSum(arr, 9);

    return 0;
}