class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReachablePoint=0;
        for(int i=0;i<nums.size();i++){
            int maxi=i+nums[i];
            if(maxReachablePoint<i) return false;
           maxReachablePoint=max(maxi,maxReachablePoint);
           

        }   
        return true;
    }
};
