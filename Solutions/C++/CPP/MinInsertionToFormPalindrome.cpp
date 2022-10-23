// Problem Link: https://practice.geeksforgeeks.org/problems/form-a-palindrome1455/1

#include <bits/stdc++.h>
using namespace std;
 
// Returns length of LCS for X[0..m-1], Y[0..n-1].
int lcs(string X, string Y, int m, int n)
{
    vector<int> prev(n + 1, 0), curr(n + 1, 0);
    int i, j;
 
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                prev[j] = 0;
 
            else if (X[i - 1] == Y[j - 1])
                curr[j] = prev[j - 1] + 1;
 
            else
                curr[j] = max(prev[j], curr[j - 1]);
        }
       
        prev = curr;
    }
 
    /* L[m][n] contains length of LCS for X[0..n-1]
            and Y[0..m-1] */
    return prev[n];
}
 
void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
 
// LCS based function to find minimum number of
// insertions
int findMinInsertionsLCS(string str, int n)
{
    // Creata another string to store reverse of 'str'
    string rev = "";
    rev = str;
    reverseStr(rev);
 
    // The output is length of string minus length of lcs of
    // str and it reverse
    return (n - lcs(str, rev, n, n));
}
int main()
{
    string str = "geeks";
    cout << findMinInsertionsLCS(str, str.length());
    return 0;
}
