#include <bits/stdc++.h>

using namespace std;

bool taken[20];
int subset[20];
vector<int>subset_sum;

void subsetGenerator(int arr[], int idx, int n, int set_len) {
    if(idx == n) return;
    int sum = 0;
    for(int i = 0; i < set_len; i++) {
        sum += subset[i]; 
        //cout<<subset[i]<<" ";
    }
    //cout<<endl;
    subset_sum.push_back(sum);
    sum = 0;
    for(int i = idx; i < n; i++) {
        if(!taken[i]) {
            subset[set_len] = arr[i];
            taken[i] = true;
            subsetGenerator(arr, i, n, set_len + 1);
            taken[i] = false;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3};

    subsetGenerator(arr, 0, 3, 0);

    cout<<subset_sum.size()<<endl;
    for(int i = 0; i < subset_sum.size(); i++) 
    cout<<subset_sum[i]<<" ";
    return 0;
}