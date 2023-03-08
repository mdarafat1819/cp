#include <bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int idx = i; 
        for(int j = i + 1; j < n; j++) {
            if(arr[idx] > arr[j]) idx = j;
        }
        swap(arr[i], arr[idx]);
    }
}

int main() {

     int arr[] = {10, 5, 20, 0, -2};

    selectionSort(arr, 5);

    for(int i = 0; i < 5; i++) 
        cout<<arr[i]<<" ";

    return 0;
}