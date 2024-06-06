class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        int carry=1;
        int i=digits.size()-1;
        while(carry>0 || i>=0){
            int curr= i >=0 ? carry+digits[i] : carry;
            ans.push_back(curr%10);
          
            carry=curr/10;
            
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
