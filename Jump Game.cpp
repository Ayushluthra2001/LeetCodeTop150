class Solution {
public:
    bool solve(vector<int>&nums,int currIndex,vector<int>&dp){
        if(currIndex>=nums.size()-1) return 1;
        if(nums[currIndex]==0) return 0;
        bool ans=0;
        if(dp[currIndex]!=-1) return dp[currIndex];
        for(int i=1;i<=nums[currIndex];i++){
            ans=ans||solve(nums,currIndex+i,dp);
            if(ans==true) break;
        }
        return dp[currIndex]=ans;
    }
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return 1;
        vector<int>dp(nums.size(),-1);
        return solve(nums,0,dp);
    }
};
