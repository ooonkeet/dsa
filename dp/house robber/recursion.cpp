class Solution {
public:
    int r(vector<int> &nums,int idx){
        if(idx>=nums.size())
            return 0;
        int take=nums[idx]+r(nums,idx+2);
        int skip=r(nums,idx+1);
        return max(take,skip);
    }
    int rob(vector<int>& nums) {
        return r(nums,0);
    }
};