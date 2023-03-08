/*https://leetcode.com/problems/find-the-difference-of-two-arrays/submissions/870387681/*/
#include <bits/stdc++.h>

using namespace std;

void differenceOfSets1(int arr1[], int arr2[], int n, int m)
{
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    int diff[n], i = 0, j = 0, new_idx = 0;

    while(i < n && j < m)
    {
        if(arr1[i] < arr2[j])
        {
            if(new_idx && diff[new_idx - 1] != arr1[i])
            {
                diff[new_idx++] = arr1[i++];
            }
            else if(!new_idx) diff[new_idx++] = arr1[i++];
            else i++;
        }
        else if(arr1[i] > arr2[j]) j++;
        else i++;
    }

    while(i < n)
    {
        if(new_idx && diff[new_idx - 1] != arr1[i])
        {
            diff[new_idx++] = arr1[i++];
        }
        else if(!new_idx) diff[new_idx++] = arr1[i++];
        else i++;
    }

    for(int i = 0; i < new_idx; i++)
    {
        cout<<diff[i]<<" ";
    }
    cout<<endl;


}

void differenceOfSets2(int arr1[], int arr2[], int n, int m)
{
    set<int>res;

    for(int i = 0; i < n; i++)
    {
        res.insert(arr1[i]);
    }

    for(int i = 0; i < m; i++)
    {
        if(res.count(arr2[i]))
        {
            res.erase(arr2[i]);
        }
    }

    set<int>::iterator it;

    for(it = res.begin(); it != res.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    return;
}

int main()
{
    int arr1[] = {7, 1, 5, 2, 3, 3};
    int arr2[] = {3, 8, 3, 20, 7};

    differenceOfSets1(arr1, arr2, 6, 5);
    differenceOfSets2(arr1, arr2, 6, 5);

    return 0;
}
