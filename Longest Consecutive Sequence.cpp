class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()== 0) return 0;
        int n = nums.size();

        int maxi = 1;
        unordered_set<int>s;
       

        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }

        for(auto i : s){
            if(s.find(i-1) == s.end()){
                int count =1;
                int x = i;
                while(s.find(x+1) != s.end()){
                    x++;
                    count++;

                }
                maxi = max(maxi, count);
            }
        }
        return maxi;
    }
};
