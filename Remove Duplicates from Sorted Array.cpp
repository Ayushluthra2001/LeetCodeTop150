class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=0;
        int i=0;
        while(i<nums.size()){
            int j=i+1;
            if(j<nums.size() && nums[i]==nums[j]){
                while(j<nums.size() && nums[j]==nums[i]) j++;
                
                nums[index++]=nums[i];
                i=j;
            }else{
                nums[index++]=nums[i++];
            }
            
            
        }
        return index;
    }
};
