// Problem link : https://practice.geeksforgeeks.org/problems/relative-sorting4323/1

Sort an array according to the other

Given two integer arrays A1[ ] and A2[ ] of size N and M respectively. Sort the first array A1[ ] such that all the relative positions of the elements in the first array are the same as the elements in the second array A2[ ].
  
Input:
N = 11 
M = 4
A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
A2[] = {2, 1, 8, 3}
Output: 
2 2 1 1 8 8 3 5 6 7 9
  
// Solution in java
  
import java.io.*;
import java.util.Arrays;

class GFG {

	
	static int first(int arr[], int low, int high, int x,
					int n)
	{
		if (high >= low) {
			/* (low + high)/2; */
			int mid = low + (high - low) / 2;

			if ((mid == 0 || x > arr[mid - 1])
				&& arr[mid] == x)
				return mid;
			if (x > arr[mid])
				return first(arr, (mid + 1), high, x, n);
			return first(arr, low, (mid - 1), x, n);
		}
		return -1;
	}

	// Sort A1[0..m-1] according to the order
	// defined by A2[0..n-1].
	static void sortAccording(int A1[], int A2[], int m,
							int n)
	{
		
		int temp[] = new int[m], visited[] = new int[m];
		for (int i = 0; i < m; i++) {
			temp[i] = A1[i];
			visited[i] = 0;
		}

		// Sort elements in temp
		Arrays.sort(temp);
		int ind = 0;

		for (int i = 0; i < n; i++) {
			int f = first(temp, 0, m - 1, A2[i], m);

		
			if (f == -1)
				continue;

			for (int j = f; (j < m && temp[j] == A2[i]);
				j++) {
				A1[ind++] = temp[j];
				visited[j] = 1;
			}
		}

		for (int i = 0; i < m; i++)
			if (visited[i] == 0)
				A1[ind++] = temp[i];
	}


	static void printArray(int arr[], int n)
	{
		for (int i = 0; i < n; i++)
			System.out.print(arr[i] + " ");
		System.out.println();
	}

	// Driver program
	public static void main(String args[])
	{
		int A1[] = { 2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8 };
		int A2[] = { 2, 1, 8, 3 };
		int m = A1.length;
		int n = A2.length;
		System.out.println("Sorted array is ");
		sortAccording(A1, A2, m, n);
		printArray(A1, m);
	}
}
