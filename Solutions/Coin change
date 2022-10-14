long long int solve(int coins[], int n, int i, int sum){
        
        if(sum==0)
        return 1;
        
        if(i==n || sum<0)
        return 0;
        
        return solve(coins, n, i, sum-coins[i])+solve(coins, n, i+1, sum);
    }
    
    long long int solveMemo(int coins[], int n, int i, int sum, vector<vector<long long int>>& dp){
        if(sum==0)
        return 1;
        
        if(i==n || sum<0)
        return 0;
        
        if(dp[i][sum]!=-1)
        return dp[i][sum];
        
        dp[i][sum] = solveMemo(coins, n, i, sum-coins[i], dp)+solveMemo(coins, n, i+1, sum, dp);
        return dp[i][sum];
    }
    
    long long int solvedp(int coins[], int n, int sum){
        
        vector<vector<long long int>> dp(n+1,vector<long long int>(sum+1,0));
        
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<sum+1;j++){
                
                if(j==0)
                dp[i][j] = 1;
                
                else{
                    
                    long long int a = 0;
                    
                    if(j-coins[i]>=0)
                    a =  dp[i][j-coins[i]];
                    
                    long long int b = dp[i+1][j];
                    
                    dp[i][j] = a+b;
                }
            }
        }
        return dp[0][sum];
    }
    
    long long int solveso(int coins[], int n, int sum){
        
        vector<long long int> p(sum+1,0);
        vector<long long int> q(sum+1,0);
        
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<sum+1;j++){
                
                if(j==0)
                q[j] = 1;
                
                else{
                    
                    long long int a = 0;
                    
                    if(j-coins[i]>=0)
                    a =  q[j-coins[i]];
                    
                    long long int b = p[j];
                    
                    q[j] = a+b;
                }
            }
            p=q;
        }
        return p[sum];
    }
    
    long long int count(int coins[], int N, int sum) {

    //   return solve(coins, N, 0, sum);
    //   vector<vector<long long int>> dp(N,vector<long long int>(sum+1,-1));
    //   return solveMemo(coins, N, 0, sum, dp);
    //   return solvedp(coins, N, sum);
         return solveso(coins, N, sum);
    }
