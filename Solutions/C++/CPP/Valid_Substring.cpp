//problem link-https://practice.geeksforgeeks.org/problems/valid-substring0624/



class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        stack<int>st;
        st.push(-1);
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                ans=max(ans,i-st.top());
            }
        }
        return ans;
    }
};
