class Solution {
public:
    int countNodes(TreeNode* root) {
        int a=1;
        if(root==NULL)
            return 0;
        else
        {
            a+=countNodes(root->left);
            a+=countNodes(root->right);
            return a;
        }
        
    }
};
