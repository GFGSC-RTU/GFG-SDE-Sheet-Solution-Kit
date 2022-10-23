//   https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        if(r1==r2)
        return true;
        
        if(r1!=NULL&&r2!=NULL){
            if(r1->data==r2->data)return isIdentical(r1->left,r2->left)&&isIdentical(r1->right,r2->right);
                
            
            else
                return false;
            
        }
        else return false;
        //Your Code here
    }
};
