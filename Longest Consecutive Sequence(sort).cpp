class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int i    = 0;
        int n    = nums.size();
        int maxi = 0;
        while(i<n){
            int j=i+1;
            int count=1;
            while(j < n){
                if( nums[j] - nums[j-1] == 0) j++;
                else if(nums[j] - nums[j-1]==1){
                    j++;
                    count++;
                }else{
                    break;
                }
                
            }
            maxi = max(maxi, count);
            i = j;
        }
        return maxi;
    }
    
};
