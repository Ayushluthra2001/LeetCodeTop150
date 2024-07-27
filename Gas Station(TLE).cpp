class Solution {
public:
    bool check(vector<int>& gas, vector<int>&cost, int currIndex){
        int x = currIndex;

        int endIndex = gas.size();
        int size = gas.size();
        int curr =0;
        int fuel = gas[currIndex] - cost[currIndex];
        
       
        if(fuel < 0) return 0;
        currIndex = (currIndex + 1) % size;
        while(currIndex != x){
            fuel += gas[currIndex];
            fuel -= cost[currIndex];
            if(fuel < 0) return 0;
            currIndex = (currIndex+1)%size;
        }
        if(currIndex == x) return true;
        return false;

    
    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n = gas.size();
        for(int i=0;i<n;i++){
            if( check(gas,cost,i)) return i;
        }

        return -1;
    }
};
