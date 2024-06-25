class Solution {
public:
int solve(vector<int>& nums, int currIndex , int prevIndex){
    if(currIndex >= nums.size()) return 0;
    if(prevIndex !=- 1 && currIndex == nums.size()-1 && nums[prevIndex] <  nums[currIndex]) return 1;
    if(prevIndex !=- 1 && currIndex == nums.size()-1 && nums[prevIndex] >= nums[currIndex]) return 0;
   
    int canInclude = 0;
    int skip       = 0;

    // we can include current index in our subsequence or not 
    if(prevIndex == -1)
        canInclude = 1 + solve(nums, currIndex + 1, currIndex);
    else if(nums[prevIndex] < nums[currIndex])
        canInclude = 1 + solve(nums, currIndex + 1, currIndex);

    // we don't want to include in our subsequence 
    skip=solve(nums, currIndex + 1, prevIndex);


    return max(skip, canInclude);
}
    int lengthOfLIS(vector<int>& nums) {
        

        return solve(nums, 0, -1);
    }
};
