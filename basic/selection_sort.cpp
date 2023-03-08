#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int arr[] = {2, 8, 6, 5, 1};

    cout<<"Before Sorting: ";
    for(int i = 0; i < 5; i++) cout<<arr[i]<<" ";
    cout<<endl;

    //for(int i = 0; i <= 4; i++)
    int i = 0;
    while(i <= 4)
     {
        int min_idx = i;
        //for(int j = i; j <= 4; j++) 
        int j = i;
        while(j <= 4)
        {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
            j++;
        }
        swap(arr[min_idx], arr[i]);
        i++;
    }

    cout<<"After Sorting: ";
    for(int i = 0; i <= 4; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    //freopen("D:\\c++\\cp\\input.txt", "r", stdin);
    //freopen("D:\\c++\\cp\\output.txt", "w", stdout);

    //int t; cin>>t; while(t--)
    //int t, cs = 1; cin>>t; while(cs <= t) cout<<"Case "<<cs<<": ", cs++,
    solve();

    return 0;
}