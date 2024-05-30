class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string ans="";
        
        for(int i=0;i<str[0].length();i++){
            bool find=true;
            for(int j=1;j<str.size();j++){
                if(i>=str[j].length()) return ans;
               // cout<<str[0][i]<<" "<<str[j][i]<<endl;
                if(str[0][i]!=str[j][i]) return ans;
            }
            if(find) ans+=str[0][i];
        }
        return ans;
    }
};
