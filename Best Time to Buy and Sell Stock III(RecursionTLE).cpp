class Solution {
public:

    int solve(vector<int>&prices,int currIndex, int left,int hold){
        if(currIndex>=prices.size() || left<=0) return 0;

        if(hold==1){
            int skip = solve(prices,currIndex+1,left,hold);
            int sell = solve(prices,currIndex+1,left-1,0) + prices[currIndex];
            return max(sell,skip);
        }else{
            int buy =  solve(prices,currIndex+1,left,1)-prices[currIndex];
            int skip = solve(prices,currIndex+1,left,0);
            return max(buy ,skip);
        }
    }
    int maxProfit(vector<int>& prices) {
        return solve(prices,0,2,-1);   
    }
};
