class Solution {
public:
    
   int height(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(height(root->left), height(root->right));
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        if (!root) return vector<vector<int>>();
        
        int h = height(root);
        
        vector<vector<int>> res(h);
        
        queue<TreeNode*> q;
        q.push(root);
        int curr = h-1;
        
        while (!q.empty()) {
            
            int sz = q.size();
            
            vector<int> t(sz);
            
            for (int i=0; i<sz; i++) {
                
                TreeNode* f = q.front();
                q.pop();
                
                t[i] = f->val;
                
                if (f->left) q.push(f->left);
                if (f->right) q.push(f->right);
                
            }
            
            res[curr] = t;
            curr--;
            
        }
        
        // reverse(res.begin(), res.end());
        
        return res;
    }
};
