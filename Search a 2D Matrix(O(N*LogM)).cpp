class Solution {
public:

bool find(vector<int>&temp , int start ,int end , int target){
    while(start<=end){
        int mid = start + (end - start) /2;
        if(temp[mid] == target) return true;
        else if(temp[mid]  > target) end=mid-1;
        else start = mid + 1;
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
         int n = matrix.size();
         int m = matrix[0].size();

        for(int i=0;i<n;i++){
            if(find(matrix[i] ,0 ,m-1 ,target)) return true;
        }
        return false;
    }
};
