class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i]) || isdigit(s[i])) {
               
               if(isalpha(s[i])) temp+=tolower(s[i]);
               else temp+=s[i];
            }
        }
        int start=0,end=temp.length()-1;
        while(start<=end){
            if(temp[start]!=temp[end]) return false;
            start++,end--;            
        }
        return true;
    }
};
