class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr=0;
        for(auto i : nums) xorr=xorr^i;
        return xorr;
    }
};
