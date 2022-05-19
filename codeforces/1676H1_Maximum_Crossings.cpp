#include <bits/stdc++.h>

using namespace std;

long long mergeSort(int arr[], int left, int right)
{
    if (left == right)
        return 0;

    int mid = left + (right - left) / 2;
    long long ans1 = mergeSort(arr, left, mid);
    long long ans2 = mergeSort(arr, mid + 1, right);

    int temp[right - left + 1], i = left, j = mid + 1, k = 0;
    long long ans = 0;

    while ((i <= mid) && (j <= right))
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            ans += (mid - i + 1);
        }
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= right)
    {
        temp[k++] = arr[j++];
    }
    k = 0;
    for (int i = left; i <= right; i++)
    {
        arr[i] = temp[k++];
    }
    return ans + ans1 + ans2;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << mergeSort(arr, 0, n - 1) << endl;
}

int main()
{
     //freopen("D:\\c++\\cp\\input.txt", "r", stdin);
    // freopen("D:\\c++\\cp\\output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
        // int t, cs = 1; cin>>t; while(cs <= t) cout<<"Case "<<cs<<": ", cs++,
        solve();

    return 0;
}