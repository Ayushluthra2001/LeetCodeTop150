class Solution {
public:
int solve(vector<int>&nums , int currIndex,vector<int>&dp){
    if(currIndex>=nums.size()-1) return 0;
    if(nums[currIndex]==0) return 1000000;
    if(dp[currIndex]!=-1)return dp[currIndex];
    int mini=INT_MAX;

    for(int i=1;i<=nums[currIndex];i++){
        int curr=1+solve(nums,currIndex+i,dp);
        mini=min(curr,mini);
    }
    return dp[currIndex]=mini;
}
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return solve(nums,0,dp);
    }
};
