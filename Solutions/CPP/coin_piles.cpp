//problem link-- https://www.geeksforgeeks.org/remove-minimum-coins-such-that-absolute-difference-between-any-two-piles-is-less-than-k/
// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the minimum number
// of coins that need to be removed
int minimumCoins(int a[], int n, int k)
{
	// To store the coins needed to be removed
	int cnt = 0;

	// Minimum value from the array
	int minVal = *min_element(a, a + n);

	// Iterate over the array
	// and remove extra coins
	for (int i = 0; i < n; i++)
	{
		int diff = a[i] - minVal;

		// If the difference between
		// the current pile and the
		// minimum coin pile is greater than k
		if (diff > k)
		{

			// Count the extra coins to be removed
			cnt += (diff - k);
		}
	}

	// Return the required count
	return cnt;
}

// Driver code
int main()
{
	int a[] = { 1, 5, 1, 2, 5, 1 };
	int n = sizeof(a) / sizeof(a[0]);
	int k = 3;

	cout << minimumCoins(a, n, k);

	return 0;
}
