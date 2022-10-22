// Problem Link: https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

// Time Compexity: O(N)
// Space Complexty: O(N)

#include <bits/stdc++.h>
using namespace std;

void printNGE(int arr[], int n)
{
	stack<int> s;

	s.push(arr[0]);

	for (int i = 1; i < n; i++) {

		if (s.empty()) {
			s.push(arr[i]);
			continue;
		}
		while (s.empty() == false && s.top() < arr[i]) {
			cout << s.top() << " --> " << arr[i] << endl;
			s.pop();
		}
		s.push(arr[i]);
	}
	while (s.empty() == false) {
		cout << s.top() << " --> " << -1 << endl;
		s.pop();
	}
}

int main()
{
	int arr[] = { 11, 13, 21, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printNGE(arr, n);
	return 0;
}
