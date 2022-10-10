#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here    
        int count=0,y;
        while(n!=0)
        {
            y=n&1;
            if(y==1)
            count++;
            
            n=n>>1;
            
        }
        if(count==1)
        return true;
        else
        return false;
        
    }
};
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        long long n;
        cin >> n;

        Solution ob;
        if(ob.isPowerofTwo(n))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}