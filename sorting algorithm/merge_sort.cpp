#include <bits/stdc++.h>

using namespace std;

void mergeSort(int arr[], int left, int right) {
    if(left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    int temp[right - left + 1], i = left, j = mid + 1, k = 0;
    while(i <= mid && j <= right) {
        if(arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        }
        else temp[k++] = arr[j++];
    }
    while(i <= mid) temp[k++] = arr[i++];
    while(j <= right) temp[k++] = arr[j++];
    for(i = left, k = 0; i <= right; i++) {
        arr[i] = temp[k++];
    }
}

int main() {

    int arr[] = {3, -1, 5, 0, 10, 6};

    mergeSort(arr, 0, 5);

    for(int i = 0; i < 6; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}