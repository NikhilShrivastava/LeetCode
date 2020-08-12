class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;
        
        map<int, vector<pair<int,int>>> loc; // map[x] = vector of pair{y, val}
        loc[0].push_back({0, root->val}); // let the root be given a initial X&Y location of 0
        traversalHelper(0, 0, root, loc); // traverse and mark all other nodes
        
        // sort nodes at each X-coord w.r.t their Y-coord and node values and append to ans
        for (auto &p: loc) {
            sort(p.second.begin(), p.second.end());
            vector<int> v;
            for (auto &x: p.second) {
                v.push_back(x.second);
            }
            ans.emplace_back(v);
        }
        
        return ans;
    }
    
    void traversalHelper(int x, int y, TreeNode* root, map<int, vector<pair<int,int>>> &loc) {
        if (root == nullptr) return;
        
        if (root->left != nullptr) {
            loc[x-1].push_back({y+1, root->left->val});
            traversalHelper(x-1, y+1, root->left, loc);
        }
        if (root->right != nullptr) {
            loc[x+1].push_back({y+1, root->right->val});
            traversalHelper(x+1, y+1, root->right, loc);
        }
    }
};
