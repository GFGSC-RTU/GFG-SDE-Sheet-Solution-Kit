//Binary Tree to DLL
//problem link-https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/




class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    Node *head= NULL;
   Node *tail=NULL;
   //Function to convert binary tree to doubly linked list and return it.
   void dll(Node* root)
   {
       if(head==NULL)
       {
           tail=head=root;
       }
       else
       {
           tail->right=root;
           root->left=tail;
           tail=root;
       }
       return ;
   }
   void inorder(Node *root)
   {
       if(root==NULL)return ;
       inorder(root->left);
       dll(root);
       inorder(root->right);
       
   }
   Node * bToDLL(Node *root)
   {
       inorder(root);
       return head;
   }
};
