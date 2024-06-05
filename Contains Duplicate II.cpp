class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mapping;
        for(int i=0;i<nums.size();i++){
            if(mapping.find(nums[i])!=mapping.end()){
                int get=mapping[nums[i]];
                if(abs(get-i)<=k) return true;
                mapping[nums[i]]=i;
            }else{
                mapping[nums[i]]=i;
            }
        }
        return false;
    }
};
