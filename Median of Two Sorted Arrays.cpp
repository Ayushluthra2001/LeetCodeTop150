class Solution {
public:

    void mergeArray(vector<int>& nums1, vector<int>& nums2, vector<int>& mergedArray){
        int i = 0;
        int j = 0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] >= nums2[j]){
                mergedArray.push_back(nums2[j++]);
            }else{
                mergedArray.push_back(nums1[i++]);
            }
        }
        while(i < nums1.size()){
            mergedArray.push_back(nums1[i++]);
        }
        while(j < nums2.size()){
            mergedArray.push_back(nums2[j++]);
        }
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>mergedArray;
        double ans=0;
        mergeArray(nums1,nums2,mergedArray);

        // for(auto i : mergedArray) cout<<i<< " ";
        // cout<<endl;
        int size = mergedArray.size();
        if(size % 2 == 0){
            int mid =size/2;
            
            ans = ((double)mergedArray[mid]+(double)mergedArray[mid-1]) /2;
        }else{
            int mid = size/2;
            ans = mergedArray[mid];
        }
        return ans;
    }
};
