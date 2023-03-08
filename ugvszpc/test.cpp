// Efficient C++ program to find minimum time
// required to produce m items.
#include<bits/stdc++.h>
using namespace std;

// Return the number of items can be
// produced in temp sec.
int findItems(int arr[], int n, int temp)
{
	int ans = 0;
	for (int i = 0; i < n; i++)
		ans += (temp/arr[i]);
	return ans;
}

// Binary search to find minimum time required
// to produce M items.
long long bs(int arr[], int n, int m, long long high)
{
	int low = 1;

	// Doing binary search to find minimum
	// time.
	while (low < high)
	{
		// Finding the middle value.
		int mid = (low+high)>>1;

		// Calculate number of items to
		// be produce in mid sec.
		int itm = findItems(arr, n, mid);

		// If items produce is less than
		// required, set low = mid + 1.
		if (itm < m)
			low = mid+1;

		// Else set high = mid.
		else
			high = mid;
	}

	return high;
}

// Return the minimum time required to
// produce m items with given machine.
long long minTime(int arr[], int n, int m)
{
	int maxval = INT_MIN;

	// Finding the maximum time in the array.
	for (int i = 0; i < n; i++)
		maxval = max(maxval, arr[i]);

	return bs(arr, n, m, maxval*m);
}

// Driven Program
int main()
{
	int n, t;
    cin>>n>>t;
    int time[n];

    for(int i = 0; i < n; i++) cin>>time[i];

	cout << minTime(time, n, t) << endl;

	return 0;
}
