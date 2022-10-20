/* Q. Given, an array of size n. Find an element that divides the array into two sub-arrays with equal sums. */

#include <iostream>
using namespace std;

int balance(int a[], int n)
{
    int ans=-1;
    int lsum=0,rsum=0,sum=0,csum=0;
    for(int i=0;i<n;i++) sum+=a[i];
    for(int i=0;i<n;i++){
        csum+=a[i];
        lsum=csum-a[i];
        rsum=sum-csum;
        if(lsum==rsum){
            ans=a[i];
            break;
        }
    }
    return ans;
}
 
// Driver Code
int main()
{
    int n,sum;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    cout << balance(a,n);
    return 0;
}
 
// Time Complexity : O(n)
// Space Complexity : O(1)
