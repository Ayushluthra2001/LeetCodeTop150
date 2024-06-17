class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        map<vector<int>,int>mapping;
       for(int i=0;i<nums.size();i++){
        unordered_map<int,int>mapping2;
        for(int j=i+1;j<nums.size();j++){
            int x=-(nums[i]+nums[j]);
            if(mapping2.find(x)!=mapping2.end()){
                vector<int>temp={nums[i],nums[j],x};
                sort(temp.begin(),temp.end());
                mapping[temp]++;
            }
            mapping2[nums[j]]++;
        }
       }

        for(auto i : mapping) ans.push_back(i.first);
        return ans;
    }
};
