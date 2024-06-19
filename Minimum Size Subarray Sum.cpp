class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int size=INT_MAX;
        int i=0;
        int currSum=0;
        int j=0;
        bool found=false;
        while(i<nums.size() && j<nums.size()){
            currSum+=nums[j];
                
            if(currSum>=target){
                 
                size=min(size,j-i+1);
                
                while(i<nums.size() && currSum>=target){
                    currSum-=nums[i];
                    i++;
                    if(currSum>=target)
                    size=min(size,j-i+1);
                    

                }
            }
            j++;
        }
       
        
       if(size==INT_MAX)  return 0;
        return size;
    }
};
