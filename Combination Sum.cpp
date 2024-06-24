class Solution {
public:
    void solve(vector<vector<int>>&ans ,vector<int>temp,vector<int>&candiates,int target,int index){
        
        if(index>=candiates.size()) return ;
        if(target<0) return ;
        if(target==0 || index==candiates.size()-1){
            if(target==0){
                ans.push_back(temp);
                return ;
            }
            else if(target-candiates[index]==0){
                temp.push_back(candiates[index]);
                ans.push_back(temp);
                return ;
            }
        }
        
        solve(ans,temp,candiates,target,index+1);
        temp.push_back(candiates[index]);
        solve(ans,temp,candiates,target-candiates[index],index);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candiates, int target) {
        
        vector<vector<int>>ans;

        vector<int>temp;
        solve(ans,temp,candiates,target,0);

        return ans;
    }
};
