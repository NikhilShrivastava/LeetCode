class Solution {
public:
     vector<vector<int>> subsets(vector<int>& nums) {
        const int n = nums.size();
        vector<vector<int>> results;
        for (int i = 0; i < pow(2, n); i++) {
            vector<int> v;
            for (int j = 0; j < n; j++) {
                if (i & (1<<j)) {
                    v.push_back(nums[j]);
                }
            }
            results.push_back(move(v));
        }
        return results;
    }
};
