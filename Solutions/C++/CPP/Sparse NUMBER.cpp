// problem link :- https://practice.geeksforgeeks.org/problems/number-is-sparse-or-not-1587115620/1

// C++ program to check if n is sparse or not
#include <bits/stdc++.h>
using namespace std;

bool checkSparse(int n)
{
	
	if (n & (n >> 1))
		return false;

	return true;
}

int main()
{
	
	cout << checkSparse(72) << endl;
	cout << checkSparse(12) << endl;
	cout << checkSparse(2) << endl;
	cout << checkSparse(3) << endl;
	return 0;
}
