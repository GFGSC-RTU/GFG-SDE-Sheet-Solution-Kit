class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        vector<int> dp(n+1, -1);
        dp[0] = 0;
        
        for(int i=0; i<=n; i++){
            if(i>=x && dp[i-x] != -1) dp[i] = max(dp[i], 1+dp[i-x]);
            if(i>=y && dp[i-y]!=-1)dp[i]=max(dp[i],1+dp[i-y]);
            if(i>=z && dp[i-z]!=-1)dp[i]=max(dp[i],1+dp[i-z]);
        }
        
        return dp[n] != -1 ? dp[n] : 0;
    }
};