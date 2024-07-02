class Solution {
public:
    double myPow(double x, int temp) {
         double ans=1.0;
         long long n = temp;
         if(n<0) n=n*-1;
        while(n>0){
            if(n%2==0){
                x = x * x;
                n = n / 2;
            }else{
                ans = ans * x;
                n   = n - 1;
            }

            //cout<<x<<" "<<n<<endl;
        }
        if(temp<0) ans = (double)(1.0) / double(ans); 
         return ans;
    }
};
