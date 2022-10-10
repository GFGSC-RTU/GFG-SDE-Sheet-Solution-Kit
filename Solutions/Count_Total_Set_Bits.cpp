#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int countSetBits(int n)
    {
        int two = 2,ans = 0;

    int N = n;

    while(N){

        ans += (n/two)*(two>>1);

        if((n&(two-1)) > (two>>1)-1) ans += (n&(two-1)) - (two>>1)+1;

        two <<= 1;

        N >>= 1;

    }

    return ans;
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
        Solution ob;
        cout << ob.countSetBits(n) << endl;
    }
    return 0;
}