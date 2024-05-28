class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int buy=prices[0];
        int sell=prices[0];
        for(int i=0;i<prices.size();i++){
            if(buy>prices[i]){
                buy=prices[i];
                sell=prices[i];
            }
            if(sell<prices[i]) sell=prices[i];
            maxprofit=max(maxprofit,sell-buy);
        }  
        
        return maxprofit; 
    }
};
