class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int n = depth(root);
        vector<vector<int>> res(n, vector<int>());
        traverse(root, res, 0);
        for (int i = 1; i < n; i += 2) {
            reverse(res[i].begin(), res[i].end());
        }
        return res;
    }
    int depth(TreeNode* root) {
        if (root == nullptr) return 0;
        return max(depth(root->left), depth(root->right)) + 1;
    }
    void traverse(TreeNode* root, vector<vector<int>>& res, int level) {
        if (root == nullptr) return;
        res[level].push_back(root->val);
        traverse(root->left, res, level+1);
        traverse(root->right, res, level+1);
   
    }
};
