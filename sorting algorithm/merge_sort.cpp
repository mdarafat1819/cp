#include <bits/stdc++.h>

using namespace std;

int ans = 0;
void mergeSort(int arr[], int left, int right) {
    if(left >= right) return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    
    int temp[right - left + 1], i = left, j = mid+1, k = 0;

    while(i <= mid && j <= right) {
        if(arr[i] < arr[j]) {
            temp[k++] = arr[i++];
           // ans++;
        }
        else {
            temp[k++] = arr[j++];
           // ans++;
        }
    }
    while(i <= mid) {
        temp[k++] = arr[i++];
       // ans++;
    }
    while(j <= right) {
        temp[k++] = arr[j++];
        ans++;
    }
    k = 0;
    for(int i = left; i <= right; i++) {
        arr[i] = temp[k++];
    }
}

int main() {

    int arr[] = {3, -1, 5, 0, 10, 6};

    mergeSort(arr, 0, 5);

    cout<<ans<<endl;
    return 0;
}