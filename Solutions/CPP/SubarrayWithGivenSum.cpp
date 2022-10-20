/* Q. Given an array arr[] of non-negative integers and an integer sum, find a subarray that adds to a given sum. */

#include <iostream>
using namespace std;

int SubarraySum(int a[], int n, int sum)
{
    int currsum = a[0],i=0,j;
    for (j=1;j<=n;j++) {
        while (currsum>sum && i<j-1) {
            currsum=currsum-a[i];
            i++;
        }
 
        if (currsum==sum) {
            cout << "Sum found between indices " << i << " and " << j-1;
            return 1;
        }
        if (j<n)
            currsum = currsum+a[j];
    }
    cout << "No subarray found!";
    return 0;
}
 
// Driver Code
int main()
{
    int n,sum;
    cin >> n >> sum;
    int a[n];
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    SubarraySum(a, n, sum);
    return 0;
}
 // Time Complexity : O(n)
 // Space Complexity : O(1)
