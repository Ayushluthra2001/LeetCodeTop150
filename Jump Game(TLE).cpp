class Solution {
public:
    bool solve(vector<int>&nums,int currIndex=0){
        if(currIndex>=nums.size()-1) return 1;
        if(nums[currIndex]==0) return 0;
        bool ans=0;
        for(int i=1;i<=nums[currIndex];i++){
            ans=ans||solve(nums,currIndex+i);
        }
        return ans;
    }
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return 1;
        return solve(nums,0);
    }
};
