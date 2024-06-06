class Solution {
public:
int solve(vector<int>& nums,int index){
    if(index>=nums.size()) return 0;
    int pic=nums[index]+solve(nums,index+2);
    int notpic=solve(nums,index+1);
    return max(pic,notpic);
}
    int rob(vector<int>& nums) {
        return solve(nums,0);
    }
};
