class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()){
            int count=1;
            int j=i+1;
            while(j<nums.size() && nums[j]==nums[i]) j++,count++;
          
            if(count==1) return nums[i];
            i=j;
        }
        return -1;
    }
};
