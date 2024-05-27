class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mapping;
        for(auto i : nums) 
            mapping[i]++;
        int maxi=0;
        int el=0;
        for(auto i : mapping){
            if(i.second>maxi){
                maxi=i.second;
                el=i.first;
            }
        }
        return el;
    }
};
