// Problem Statement https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/1

#include<bits/stdc++.h>
using namespace std;

void findPairs(int arr1[], int arr2[], int n, int m, int x)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr1[i]);
 
    for (int j = 0; j < m; j++)
        if (s.find(x - arr2[j]) != s.end())
            cout << x - arr2[j] << " "
                 << arr2[j] << endl;
}
 

int main()
{
    int arr1[] = {1, 0, -4, 7, 6, 4};
    int arr2[] = {0, 2, 4, -3, 2, 1};
    int x = 8;
    int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);
    findPairs(arr1, arr2, n, m, x);
    return 0;
}