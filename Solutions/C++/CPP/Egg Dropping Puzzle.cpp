#include <bits/stdc++.h>
using namespace std;

int minTrials(int n, int k)
{

vector<vector<int> > dp(k + 1, vector<int>(n + 1, 0));
int m = 0; 
while (dp[m][n] < k) {
	m++;
	for (int x = 1; x <= n; x++) {
		dp[m][x] = 1 + dp[m - 1][x - 1] + dp[m - 1][x];
	}
}
return m;
}


int main()
{
cout << minTrials(2, 10);
return 0;
}


