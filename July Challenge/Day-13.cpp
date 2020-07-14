class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        
    if(p!=nullptr && q!=nullptr && p->val == q->val)
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        return (p==nullptr && q==nullptr) ? true : false;
    }
};
