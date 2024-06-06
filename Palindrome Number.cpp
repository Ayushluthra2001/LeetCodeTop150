class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string y=to_string(x);
        int start=0;
        int end=y.length()-1;
        while(start<=end){
            if(y[start]!=y[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};
