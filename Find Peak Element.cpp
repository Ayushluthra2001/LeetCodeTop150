class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        
        if (n == 1) return 0; // Only one element
        
        if (nums[0] > nums[1]) return 0; // Check if the first element is a peak
        if (nums[n - 1] > nums[n - 2]) return n - 1; // Check if the last element is a peak
        
        int start = 1, end = n - 2; // We start from 1 and end at n-2 to avoid boundary issues
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            // Check if mid is a peak element
            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
                return mid;
            }
            
            // If the left neighbor is greater, then the peak must be on the left side
            if (nums[mid - 1] > nums[mid]) {
                end = mid - 1;
            } else {
                // Otherwise, the peak is on the right side
                start = mid + 1;
            }
        }
        
        return -1; // This will never be reached, as there is guaranteed to be a peak
    }
};
