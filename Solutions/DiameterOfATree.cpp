    int height (Node *root){
        if (!root)
            return 0;
        return (1 + max(height(root->left), height(root->right)));
    }
    int helper(Node *root){
        if (root == NULL)
            return 0;
        return height(root->left) + height(root->right);
    }
    int diameter(Node* root) {
        // Your code here
        int a = helper(root);
        int b = helper(root->left);
        int c = helper(root->right);
        return 1 + max(a, max(b, c));
    }