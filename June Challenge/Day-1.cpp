TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        else
        {
            struct TreeNode *temp;
            invertTree(root->left);
            invertTree(root->right);
            temp=root->left;
            root->left=root->right;
            root->right=temp;
            return root;
        }
        
    }
