class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        

       
        int sum              = 0;
        int maxSum           = INT_MIN;
        int currSumforMaxSum = 0;
        int currSumforMinSum = 0;
        int minSum           = INT_MAX;


        for(int i=0;i<nums.size();i++){
        
            sum += nums[i];
            currSumforMaxSum += nums[i];
            currSumforMinSum += nums[i];
            maxSum = max(maxSum , currSumforMaxSum);
            minSum = min(minSum , currSumforMinSum);

            if(currSumforMaxSum<0) currSumforMaxSum =0;
            if(currSumforMinSum>0) currSumforMinSum =0;

        }
        if(sum == minSum) return maxSum; // if you all the values of the array are negative
        return max(maxSum , (sum - minSum));
    }
};
