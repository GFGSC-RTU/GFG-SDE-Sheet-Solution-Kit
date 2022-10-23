Problem link : https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1

// Solution 
class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>> ans;
        int flag = 0; // indicating buying / selling of stock 
        int i=0;
        int buy=0, sell=0;
        while(i < n-1){
            if(A[i]  < A[i+1] && flag==0){
                // Time to buy stock - 
                flag = 1;
                buy = i;
            }
            if(A[i]  > A[i+1] && flag==1){
                // Time to sell - 
                flag = 0;
                sell = i;
                ans.push_back({buy, sell});
            }
            i++;
        }
        
        if(flag==1 && A[buy] < A[n-1]){
            flag=0;
            sell = n-1;
            ans.push_back({buy, sell});
        }
        return ans;
    }
};