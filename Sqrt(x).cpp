class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int ans=-1;
        for(long long i=1;i*i<=x;i++){
            if(i*i<=x){
                ans=i;
            }
        }
        return ans;
    }
};
