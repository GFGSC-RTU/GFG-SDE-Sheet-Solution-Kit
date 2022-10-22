// https://practice.geeksforgeeks.org/problems/toggle-bits-given-range/0



#include <bits/stdc++.h>
using namespace std;


unsigned int toggleBitsFromLToR(unsigned int n,
								unsigned int l,
								unsigned int r)
{
	
	int num = ((1 << r) - 1) ^ ((1 << (l - 1)) - 1);

	
	return (n ^ num);
}

int main()
{
	unsigned int n = 50;
	unsigned int l = 2, r = 5;
	cout << toggleBitsFromLToR(n, l, r);
	return 0;
}
