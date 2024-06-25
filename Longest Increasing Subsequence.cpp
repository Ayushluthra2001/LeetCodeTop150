class Solution {
public:
int solve(vector<int>& nums, int currIndex , int prevIndex , vector<vector<int>>& dp){
    if(currIndex >= nums.size()) return 0;
    if(prevIndex !=- 1 && currIndex == nums.size()-1 && nums[prevIndex] <  nums[currIndex]) return 1;
    if(prevIndex !=- 1 && currIndex == nums.size()-1 && nums[prevIndex] >= nums[currIndex]) return 0;
    
    if(dp[currIndex][prevIndex+1]!=-1) return dp[currIndex][prevIndex+1];
    int canInclude = 0;
    int skip       = 0;

    // we can include current index in our subsequence or not 
    if(prevIndex == -1)
        canInclude = 1 + solve(nums, currIndex + 1, currIndex ,dp);
    else if(nums[prevIndex] < nums[currIndex])
        canInclude = 1 + solve(nums, currIndex + 1, currIndex ,dp);

    // we don't want to include in our subsequence 
    skip=solve(nums, currIndex + 1, prevIndex, dp);


    return dp[currIndex][prevIndex+1]=max(skip, canInclude);
}
    int lengthOfLIS(vector<int>& nums) {
        
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return solve(nums, 0, -1,dp);
    }
};
