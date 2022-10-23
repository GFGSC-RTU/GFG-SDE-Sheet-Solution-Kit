
//problem link-https://practice.geeksforgeeks.org/problems/largest-value-in-each-level/0



class Solution
{
    public:
    vector<int> largestValues(Node* root)
    {
            vector<int>ans;
       queue<Node *>q;
       q.push(root);
       while(q.size()){
           int count = q.size();
           int ma = INT_MIN;
           while(count --){
               Node * p = q.front();
               q.pop();
               ma = max(p->data,ma);
               if(p->left) q.push(p->left);
               if(p->right) q.push(p->right);
           }
           ans.push_back(ma);
       }
       return ans;
        //code here
    }
};
