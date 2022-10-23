#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        int a = arr[0];
        int i=1;
        while(i<n)
        {
            a^=arr[i];
            i++;
        }
        return a;
    }
};
int main()
{
int t;
cin>>t;
while(t--)
{
  int n;
  cin >> n;
  int A[n];
  for(int i=0;i<n;i++)
  {
   cin >> A[i];
  }

  Solution obj;
  int res = obj.findOnce(A,n);
  cout << res <<endl;
}
return 0;
}
