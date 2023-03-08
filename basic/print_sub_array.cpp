#include <bits/stdc++.h>

using namespace std; 

void subArray1(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; i < n - j; j++) {
            for(int k = j; k <= j + i; k++) {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
void subArray2(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            for(int k = i; k <= j; k++) {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}

//1 Based
void SubArray3(int arr[], int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i + 1; j++) {
            for(int k = j; k < j + i; k++) {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        
    }
}
int main() {

    int arr[] = {1, 2, 3, 4, 5};
    //subArray1(arr, 5);
    //subArray2(arr, 4);
    SubArray3(arr, 4);
    return 0;
}