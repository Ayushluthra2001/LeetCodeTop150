class Solution {
public:
int solve(int n){
    int sum=0;
    while(n>0){
        int x = n % 10 ;
        sum += x * x;
        n = n / 10;
    }
    return sum;
}
    bool isHappy(int n) {
        unordered_map<int,int>mapping; 

        while(n != 1 && mapping.find(n) == mapping.end()){

            int x = solve(n);
            mapping[n] = x;
          
            n = x;
        }  
       
        if(n==1) return true;
        return false;

    }
};
