//problem link-https://practice.geeksforgeeks.org/problems/fab3dbbdce746976ba35c7b9b24afde40eae5a04/


class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        vector<int>ans(n);
        stack<int>st;
        st.push(n-1);
        ans[n-1]=-1;
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                // cout<<"."<<i<<".";
                ans[i]=-1;
            }
            else{
                ans[i]=arr[st.top()];
            }
            st.push(i);
        }
        return ans;
        // Your code goes here
    } 
};
