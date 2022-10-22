Problem Statement:- Given a rod of length n inches and an array of prices that includes prices of all pieces of size smaller than n.
Determine the maximum value obtainable by cutting up the rod and selling the pieces.
For example, if the length of the rod is 8 and the values of different pieces are given as the following, 
then the maximum obtainable value is 22 (by cutting in two pieces of lengths 2 and 6) 

length   | 1   2   3   4   5   6   7   8  
--------------------------------------------
price    | 1   5   8   9  10  17  17  20
And if the prices are as following, then the maximum obtainable value is 24 (by cutting in eight pieces of length 1) 

length   | 1   2   3   4   5   6   7   8  
--------------------------------------------
price    | 3   5   8   9  10  17  17  20


Solution:-

Approach1:- Using the idea of Unbounded Knapsack.

#include <bits/stdc++.h>
using namespace std;

int t[9][9];  // Global Array for the purpose of memoization.

int un_kp(int price[], int length[],int Max_len, int n)   // A recursive program, using ,memoization, to implement the rod cutting problem(Top-Down).
 {
   if (n == 0 || Max_len == 0)   // The maximum price will be zero,when either the length of the rod is zero or price is zero.
	{
		return 0;
	}
  if (length[n - 1] <= Max_len)  // If the length of the rod is less than the maximum length, Max_lene will consider it.Now depending upon the profit,either Max_lene we will take it or discard it.
	{
		t[n][Max_len] = max(price[n - 1]+ un_kp(price, length, Max_len - length[n - 1], n), un_kp(price, length, Max_len, n - 1));
	}
	else  // If the length of the rod is greater than the permitted size, Max_len we will not consider it.
	{
		t[n][Max_len] = un_kp(price, length,Max_len, n - 1);
	}
return t[n][Max_len]; // Max_lene Max_lenill return the maximum value obtained, Max_lenhich is present at the nth roMax_len and Max_length column.
}

/* Driver program to test above functions */
int main()
{
	int price[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
	int n = sizeof(price) / sizeof(price[0]);
	int length[n];
	for (int i = 0; i < n; i++) {
		length[i] = i + 1;
	}
	int Max_len = n;

	// Function Call
	cout << "Maximum obtained value is "<< un_kp(price, length, n, Max_len) << endl;
}

Approach2:- Dynamic Programming :-

#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b)? a : b;}  // A utility function to get the maximum of two integers

int cutRod(int price[], int n)  /* Returns the best obtainable price for a rod of length n and price[] as prices of different pieces */
{
int val[n+1];
val[0] = 0;
int i, j;
for (i = 1; i<=n; i++) // Build the table val[] in bottom up manner and return the last entry from the table
{
	int max_val = INT_MIN;
	for (j = 0; j < i; j++)
		max_val = max(max_val, price[j] + val[i-j-1]);
	val[i] = max_val;
}

return val[n];
}

/* Driver program to test above functions */
int main()
{
	int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout <<"Maximum Obtainable Value is "<<cutRod(arr, size);
	getchar();
	return 0;
}

Approach 3:-Recursion

#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; } // A utility function to get the maximum of two integers

int cutRod(int price[], int index, int n,vector<vector<int> >& dp) /* Returns the best obtainable price for a rod of length n and price[] as prices of different pieces */
{
	// base case
	if (index == 0) {
		return n * price[0];
	}
	if (dp[index][n] != -1) // At any index we have 2 options either cut the rod of this length or not cut it
		return dp[index][n];
	
	int notCut = cutRod(price, index - 1, n,dp);
	int cut = INT_MIN;
	int rod_length = index + 1;

	if (rod_length <= n)
		cut = price[index]+ cutRod(price, index, n - rod_length,dp);

	return dp[index][n]=max(notCut, cut);
	
}
/* Driver program to test above functions */
int main()
{
	int arr[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
	int size = sizeof(arr) / sizeof(arr[0]);
	vector<vector<int> > dp(size, vector<int>(size + 1, -1));
	cout << "Maximum Obtainable Value is " << cutRod(arr, size - 1, size, dp);
	getchar();
	return 0;
}

Approach 4:- Recursion 

#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; } // A utility function to get the maximum of two integers

int cutRod(int price[], int index, int n) /* Returns the best obtainable price for a rod of length n and price[] as prices of different pieces */
{
	// base case
	if (index == 0) {
		return n * price[0];
	}
	int notCut = cutRod(price,index - 1,n);
	int cut = INT_MIN;
	int rod_length = index + 1;

	if (rod_length <= n)
		cut = price[index]+ cutRod(price,index,n - rod_length);

	return max(notCut, cut);
}

/* Driver program to test above functions */
int main()
{
	int arr[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum Obtainable Value is "<< cutRod(arr, size - 1, size);
	getchar();
	return 0;
}







