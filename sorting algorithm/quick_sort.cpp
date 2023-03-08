#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int left, int right) {

    int pivot = arr[right];
    int i = left - 1;
    for(int j = left; j < right; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
          
        }
    }
    swap(arr[i + 1], arr[right]);
    return i + 1;
}

int partition2(int arr[], int left, int right) {

    int pivot = arr[right];
    int i = left;
    for(int j = left; j < right; j++) {
        if(arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[right]);
    return i;
}

void quickSort(int arr[], int left, int right) {
    if(left >= right) return;
    int pi = partition2(arr, left, right);
    quickSort(arr, left, pi - 1);
    quickSort(arr, pi + 1, right);
}

int main() {

    int arr[] = {3, -1, 5, 0, 10, 6};

    quickSort(arr, 0, 5);

    for(int i = 0; i < 6; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}