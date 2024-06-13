class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mapping;
        for(auto i : nums) mapping[i]++;
        for(auto i : mapping) if(i.second==1) return i.first;
        return -1;
    }
};
