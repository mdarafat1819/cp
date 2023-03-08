#include <bits/stdc++.h>

using namespace std;

void intersection(int arr1[], int arr2[], int m, int n)
{
    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);
    int inter[m + n], idx = 0, i = 0, j = 0;

    while(i < m && j < n) {
        if(arr1[i] == arr2[j] && (!idx || inter[idx - 1] != arr1[i])) {
            inter[idx++] = arr1[i];
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]) i++;
        else j++;
    }

    for(int i = 0; i < idx; i++) cout<<inter[i]<<" ";
    cout<<endl;

    return;
}

void intersection2(int arr1[], int arr2[], int n, int m) {

    set<int>temp, res;
    set<int>::iterator it;

    for(int i = 0; i < n; i++) {
        temp.insert(arr1[i]);
    }
    for(int i = 0; i < m; i++) {
        if(temp.find(arr2[i]) != temp.end()) {
            res.insert(arr2[i]);
        }
    }

    for(it = res.begin(); it != res.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr1[] = {7, 1, 5, 2, 3, 3};
    int arr2[] = {3, 8, 3, 20, 7};

    intersection(arr1, arr2, 6, 5);
    intersection2(arr1, arr2, 6, 5);


    return 0;
}
