class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalFuel = 0;
        int totalCost = 0;
        int n         = gas.size();
        for(int i=0;i<n;i++){
            totalFuel += gas[i];
            totalCost += cost[i];
        }

        if(totalFuel < totalCost) return -1;
        int result = 0;
        int total  =  0;
        for(int i=0;i<n;i++){
            total += gas[i];
            total -= cost[i];
            if(total< 0){
                result = i+1;
                total  = 0;
            }
        }

        return result ;
    }
};
