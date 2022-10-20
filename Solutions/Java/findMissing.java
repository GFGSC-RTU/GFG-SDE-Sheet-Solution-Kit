//Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers.

import java.io.*;
import java.util.*;

class GFG {

	// Function to find the missing number
	public static void findMissing(int arr[], int N)
	{
		int i;
		int temp[] = new int[N + 1];
		for (i = 0; i <= N; i++) {
			temp[i] = 0;
		}

		for (i = 0; i < N; i++) {
			temp[arr[i] - 1] = 1;
		}

		int ans = 0;
		for (i = 0; i <= N; i++) {
			if (temp[i] == 0)
				ans = i + 1;
		}
		System.out.println(ans);
	}
	// Driver Code
	public static void main(String[] args)
	{
		int arr[] = { 1, 3, 7, 5, 6, 2 };
		int n = arr.length;

		// Function call
		findMissing(arr, n);
	}
}
