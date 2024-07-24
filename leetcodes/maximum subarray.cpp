class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int max_end=nums[0];
    int max_far=nums[0];
    for(int i=1;i<nums.size();i++)
     {
        max_end=max(nums[i],max_end+nums[i]);
        max_far=max(max_end,max_far);
    }
     return max_far;
    }
};