class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int  countZero=0;
        vector<int>ans(nums.size(),0);
        int product=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)product*=nums[i];
            else countZero++;
        }
        if(countZero>=2) return ans;
        if(countZero==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0) ans[i]=0;
                else ans[i]=product;
                
            }
            return ans;
        }
        for(int i=0;i<ans.size();i++){
            if(nums[i]!=0){
                ans[i]=product/nums[i];
            }else{
                ans[i]=product;
            }
        }

        return ans;
    }
};
