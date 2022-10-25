/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    map<int,vector<pair<int,int>>> mp;
    void dfs(TreeNode *root,int x,int y)
    {
        if(!root)
            return;
        mp[x].push_back({y,root->val});
        dfs(root->left,x-1,y+1);
        dfs(root->right,x+1,y+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        vector<vector<int>> res;
        dfs(root,0,0);
        for(auto it : mp)
        {
            sort(it.second.begin(),it.second.end());
            vector<int> v;
            for(auto p : it.second)
            {
                v.push_back(p.second);
            }
            res.push_back(v);
        }
        return res;
    }
};
