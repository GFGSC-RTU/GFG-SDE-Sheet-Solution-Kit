// Problem Link : https://leetcode.com/problems/frog-jump/

import java.util.*;
class TUF
{
static int solve(int ind,int[] height,int[] dp)
{
    if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int jumpTwo = Integer.MAX_VALUE;
    int jumpOne= solve(ind-1, height,dp)+ Math.abs(height[ind]-height[ind-1]);
    if(ind>1)
        jumpTwo = solve(ind-2, height,dp)+ Math.abs(height[ind]-height[ind-2]);
    
    return dp[ind]=Math.min(jumpOne, jumpTwo);
}


public static void main(String args[]) {

  int height[]={30,10,60 , 10 , 60 , 50};
  int n=height.length;
  int dp[]=new int[n];
  Arrays.fill(dp,-1);
  System.out.println(solve(n-1,height,dp));
}
}