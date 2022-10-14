//problem link-- https://practice.geeksforgeeks.org/problems/cutted-segments1642/1
// A recursive solution for Rod cutting problem
#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;


int max(int a, int b) { return (a > b) ? a : b; }

int cutRod(int price[], int index, int n)
{
	// base case
	if (index == 0) {
		return n * price[0];
	}

	int notCut = cutRod(price,index - 1,n);
	int cut = INT_MIN;
	int rod_length = index + 1;

	if (rod_length <= n)
		cut = price[index]
			+ cutRod(price,index,n - rod_length);

	return max(notCut, cut);
}

/* Driver program to test above functions */
int main()
{
	int arr[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum Obtainable Value is "
		<< cutRod(arr, size - 1, size);
	getchar();
	return 0;
}


