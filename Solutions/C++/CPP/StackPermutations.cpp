//problem link-https://practice.geeksforgeeks.org/problems/stack-permutations/



class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        stack<int>st;
        int x=0;
        for(int i=0;i<N;i++){
           
                st.push(A[i]);
                while(!st.empty() && B[x]==st.top()){
                    st.pop();
                    x++;
                }
        }
        return st.empty();
    }
};
