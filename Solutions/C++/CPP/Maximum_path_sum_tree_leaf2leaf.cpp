// Solution for Findind maximum path sum between any two leaf nodes

class Solution {
public:
    
    int solve(Node* root, int& res)
    {
        if(!root) return INT_MIN;
        
        if(!root->left && !root->right) return root->data;
        
        int l= solve(root->left, res);
        int r= solve(root->right, res);
        
        if(root->left && root->right)
            res=max(res,l+r+root->data);
            
        
        
        return max(l,r)+ root->data;
    }
    
    int maxPathSum(Node* root)
    {
        int res=INT_MIN;
        int ans= solve(root, res);
        
        if(!root->left || !root->right)
            return max(res, ans);
        
        return res;
    }
};