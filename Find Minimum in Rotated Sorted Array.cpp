class Solution {
public:
    int findMin(vector<int>& nums) {
       int findMini=INT_MAX;
        for(auto i : nums) findMini=min(findMini,i);       
       return findMini;
    }
};
