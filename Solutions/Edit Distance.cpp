//  problem link : https://practice.geeksforgeeks.org/problems/edit-distance3702
 
 int dp_fun(string s, string t){
        int n = s.length(), m = t.length();
        int dp[n+1][m+1];
        
        for(int i = 0; i <= n; i++){
            dp[i][0] = i;
        }
        for(int i = 0; i <= m; i++){
            dp[0][i] = i;
        }
        
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(s[i-1] == t[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    int op1 = 1 + dp[i-1][j];
                    int op2 = 1 + dp[i][j-1];
                    int op3 = 1 + dp[i-1][j-1];
                    dp[i][j] = min(op1, min(op2, op3));
                }
            }
        }
        
        return dp[n][m];
    }
  
    int editDistance(string s, string t) {
        return dp_fun(s, t);
    }