// problem link-- https://www.geeksforgeeks.org/print-palindromic-paths-top-left-bottom-right-matrix/
// C++ program to print all palindromic paths
// from top left to bottom right in a grid.
#include<bits/stdc++.h>
using namespace std;
#define N 4
bool isPalin(string str)
{
	int len = str.length() / 2;
	for (int i = 0; i < len; i++)
	{
		if (str[i] != str[str.length() - i - 1])
			return false;
	}
	return true;
}

// i and j are row and column indexes of current cell
// (initially these are 0 and 0).
void palindromicPath(string str, char a[][N],
							int i, int j, int m, int n)
{
		
	// If we have not reached bottom right corner, keep
	// exploring
	if (j < m - 1 || i < n - 1)
	{
		if (i < n - 1)
			palindromicPath(str + a[i][j], a, i + 1, j, m, n);
		if (j < m - 1)
			palindromicPath(str + a[i][j], a, i, j + 1, m, n);
	}

	// If we reach bottom right corner, we check if
	// if the path used is palindrome or not.
	else {
		str = str + a[n - 1][m - 1];
		if (isPalin(str))
			cout<<(str)<<endl;
	}
}

// Driver code
int main()
{
	char arr[][N] = { { 'a', 'a', 'a', 'b' },
					{ 'b', 'a', 'a', 'a' },
					{ 'a', 'b', 'b', 'a' } };
	string str = "";
	palindromicPath(str, arr, 0, 0, 4, 3);
	return 0;
}



 