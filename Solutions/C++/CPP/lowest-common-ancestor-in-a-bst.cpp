Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   while (root != NULL)
    {
        // If both n1 and n2 are smaller than root,
        // then LCA lies in left
        if (root->data > n1 && root->data > n2)
        root = root->left;
 
        // If both n1 and n2 are greater than root,
        // then LCA lies in right
        else if (root->data < n1 && root->data < n2)
        root = root->right;
 
        else break;
    }
    return root;
}
