#include <bits/stdc++.h>

using namespace std;

int idxOfUpper(int arr[], int left, int right, int value){
   while(right >= left){
        int mid = left + (right - left) / 2;
       if(right == left && arr[left] > value) return right;
       if(arr[mid] > value) right = mid;
       else if(arr[mid] <= value) left = mid + 1;
   }
   return -1;
}

int main()
{
     freopen("D:\\c++\\cp\\input.txt", "r", stdin);
     //freopen("D:\\c++\\cp\\output.txt", "w", stdout);
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];

    cout<<idxOfUpper(arr, 0, n - 1, 1)<<endl;

    return 0;
}