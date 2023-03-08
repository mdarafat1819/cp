#include <bits/stdc++.h>

using namespace std;

bool isSubset(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) return false;
        else if(arr1[i] > arr2[j]) j++;
        else i++, j++;
    }
    return i == n ? true : false;
}



int main()
{
    int arr1[] = {11, 1, 13, 21, 3, 7};
    int arr2[] = {11, 3, 7, 1};

    if(isSubset(arr2, arr1, 4, 6))
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
