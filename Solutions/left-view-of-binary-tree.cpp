//Problem Link->https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1?page=7&curated[]=1&sortBy=submissions

void helper(Node*root,vector<int>&ans,int level){
    if(!root){
        return ;
    }
    if(ans.size()==level){
        ans.push_back(root->data);
    }
    helper(root->left,ans,level+1);
     helper(root->right,ans,level+1);
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;
   helper(root,ans,0);
   return ans;
}
