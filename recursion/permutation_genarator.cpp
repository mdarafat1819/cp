#include <bits/stdc++.h>

using namespace std;

int used[20], number[20];

void permutation(int at, int n) {
    if(at == n + 1) {
        for(int i = 1; i <= n; i++) {
            printf("%d ", number[i]);
        }
        printf("\n");
        return;
    }

    for(int i = 1; i <= n; i++) if(!used[i])
    { 
        used[i] = 1;
        number[at] = i;
        permutation(at + 1, n);
        used[i] = 0;
    }
}

bool visited[10] = {false};
int permutedArray[10];

void printStack(stack<int> s) {
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

void permutation(int arr[], int left, int right) {
    if(left == right) {
        for(int i = 0; i < right; i++) {
            //cout<<permutedArray[i]<<" ";
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i = left; i < right; i++) //if(!visited[arr[i]]) 
    {
        //permutedArray[left] = arr[i];
        swap(arr[left], arr[i]);
        visited[arr[i]] = true;
        permutation(arr, left + 1, right);
        visited[arr[i]] = false;
        swap(arr[left], arr[i]);
    }
}

int cmp[10];
int k = 0;

void combination(int arr[], int len, int left, int right) {
    k++;
    if(len == 3) {
        for(int i = 0; i < 3; i++) {
            cout<<cmp[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i = left; i < right; i++)
     if(!visited[arr[i]])
     {
        cmp[len] = arr[i];
        visited[arr[i]] = true;
        combination(arr, len + 1, i, right);
        visited[arr[i]] = false;
    }

}

int main() {

    int arr[] = {1, 2, 3, 4, 5};

    //permutation(arr, 0, 3);
   // permutation(arr,0, 3);
  
   combination(arr, 0, 0, 4);
    cout<<k<<endl;

    return 0;
}