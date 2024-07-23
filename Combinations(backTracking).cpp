class Solution {
public:
void solve(vector<vector<int>>& ans, vector<int> &temp, int currIndex,int k,vector<int>&temp2){

    if(currIndex>=temp.size() || k==0) {
        if(k==0)
        ans.push_back(temp2);
        return ;
    }

    solve(ans,temp,currIndex+1,k,temp2);
    temp2.push_back(temp[currIndex]);
    solve(ans,temp,currIndex+1,k-1,temp2);
    temp2.pop_back();
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;

        for(int i=1;i<=n;i++){
            temp.push_back(i);
        } 

        vector<vector<int>>ans;
        vector<int>temp2;
        solve(ans,temp,0,k,temp2);


        return ans;
    }
};
