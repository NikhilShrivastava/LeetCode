class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int ones=0;
        int twos=0;
        for(auto i:nums)
        {
            ones=(ones^i)&(~twos);
            twos=(twos^i)&(~ones);
        }
        return ones;
    }
};
