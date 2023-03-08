#include <bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j > 0; j--) {
            if(arr[j] < arr[j-1]) swap(arr[j], arr[j-1]);
        }
    }
}

void insertionSort2(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int j = i - 1, x = arr[i];
        while(j >= 0 && arr[j] > x) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}

int main() {

    int arr[] = {10, 5, 20, 0, -2};

    insertionSort2(arr, 5);

    for(int i = 0; i < 5; i++) 
        cout<<arr[i]<<" ";
    return 0;
}