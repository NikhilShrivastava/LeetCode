class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xy = 0;
        for(int n: nums) xy ^= n;
        xy &= -xy;
        vector<int> result = {0, 0};
        for(int n: nums){
            if(xy & n) result[0] ^= n;
            else result[1] ^= n;
        }
        return result;
    
    }
};
