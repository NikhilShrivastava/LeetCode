class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int mid=0;
        int pos=-1;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(nums[mid]==target)
            {
                pos=mid;
                break;
            }
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        if(pos!=-1)
           return pos;
        
        else
        {
            vector<int>::iterator d;
            d=upper_bound(nums.begin(),nums.end(),target);
            return d-nums.begin();
        }
    
        
    }
};
