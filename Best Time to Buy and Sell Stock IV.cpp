class Solution {
public:

    int solve(vector<int>&prices,int currIndex, int left,int hold,vector<vector<vector<int>>>&dp){
        if(currIndex>=prices.size() || left<=0) return 0;
        if(dp[currIndex][left][hold] != -1) return dp[currIndex][left][hold];
        if(hold==1){
            int skip = solve(prices,currIndex+1,left,hold,dp);
            int sell = solve(prices,currIndex+1,left-1,0,dp) + prices[currIndex];
            return dp[currIndex][left][hold]=max(sell,skip);
        }else{
            int buy =  solve(prices,currIndex+1,left,1,dp)-prices[currIndex];
            int skip = solve(prices,currIndex+1,left,0,dp);
            return dp[currIndex][left][hold]=max(buy ,skip);
        }
    }
    int maxProfit(int k , vector<int>& prices) {

        int n = prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(k+1,vector<int>(2,-1)));
        return solve(prices,0,k,0,dp);   
    }
};
