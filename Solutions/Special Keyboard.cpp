// Problem link : https://practice.geeksforgeeks.org/problems/special-keyboard3018/1

/* A recursive C++ program to print maximum number of A's using
following four keys */
#include <bits/stdc++.h>
using namespace std;


int findoptimal(int N)
{
	
	if (N <= 6)
		return N;

	
	int max = 0;

	
	int b;
	for (b = N - 3; b >= 1; b--) {

		
		int curr = (N - b - 1) * findoptimal(b);
		if (curr > max)
			max = curr;
	}
	return max;
}


int main()
{
	int N;

	
	for (N = 1; N <= 20; N++)
		cout << "Maximum Number of A's with " << N <<
		" keystrokes is " << findoptimal(N) << endl;
}


