#include <bits/stdc++.h>
using namespace std;

// User function Template
int getMinDiff(int arr[], int n, int k)
{
	sort(arr, arr + n);
	int ans = arr[n - 1] - arr[0]; // Maximum possible height difference

	int mn, mx;
	mn = arr[0];
	mx = arr[n - 1];

	for (int i = 1; i < n; i++) 
	{
		if(arr[i] - k < 0) // if on subtracting k we got negative then continue
		continue;
		mn= min(arr[0] + k,arr[i] - k); // Minimum element when we add k to whole array
		mx = max(arr[i-1]+k,arr[n-1]-k); // Maximum element when we subtract k from whole array
		ans = min( mx - mn, ans);
	}
	return ans;
};
// Driver Code Starts
int main()
{
	int k = 3, n = 5;
	int arr[n] = { 3, 9, 12, 16, 20};
	int ans = getMinDiff(arr, n, k);
	cout << ans;
}
