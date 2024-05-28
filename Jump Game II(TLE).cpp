class Solution {
public:
int solve(vector<int>&nums , int currIndex){
    if(currIndex>=nums.size()-1) return 0;
    if(nums[currIndex]==0) return 1000000;
    int mini=INT_MAX;
    for(int i=1;i<=nums[currIndex];i++){
        int curr=1+solve(nums,currIndex+i);
        mini=min(curr,mini);
    }
    return mini;
}
    int jump(vector<int>& nums) {
        return solve(nums,0);
    }
};
