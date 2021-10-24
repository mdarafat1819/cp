#include <bits/stdc++.h>

using namespace std;

int binary_search(int arr[], int left, int right, int value) 
{
    if(left > right){
        return -1;
    }

    int mid = (left + right) / 2;
    if(arr[mid] == value) return mid;

    if(arr[mid] > value) return binary_search(arr,  mid + 1, right, value);
    return binary_search(arr, left, mid-1, value);
}

int main()
{
    int arr[] = {5, 10, 12, 17, 18, 19, 25, 23};

    cout<<binary_search(arr, 0, 7, 10)<<endl;

    return 0;
}