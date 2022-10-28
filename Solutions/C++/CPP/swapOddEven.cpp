// https://practice.geeksforgeeks.org/problems/swap-all-odd-and-even-bits-1587115621/1
class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	unsigned int x,y,ans;
    	x=n& 0x55555555;
    // 	cout<<"x = "<<x<<endl;
    	y=n& 0xAAAAAAAA;
    // 		cout<<"x = "<<y<<endl;
    	x=x<<1;
    // 		cout<<"x<<1 "<<x<<endl;
    	y=y>>1;
    // 		cout<<"y>>1 = "<<y<<endl;
    	ans=x | y;
    // 		cout<<"ans = "<<ans<<endl;
    	return ans;
    	
    }
};
