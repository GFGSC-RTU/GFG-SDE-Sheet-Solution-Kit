#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        if(n==0)
        return 0;
        // Your code here
        int count=0,y,i=1;
        while(n!=0)
        {
            y=n&1;
            if(y==1)
            break;
            
            n=n>>1;
            i++;
        }
        
        return i;
    }
};
int main()
{
int t;
cin >> t;
while(t--)
{
  int n;
  cin >> n;
  Solution obj;
  unsigned int res = obj.getFirstSetBit(n);
  cout << res <<endl;
}
return 0;
}
