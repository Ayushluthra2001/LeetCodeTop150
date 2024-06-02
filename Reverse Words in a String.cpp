class Solution {
public:
    string reverseWords(string s) {
        vector<string>ans;
        int i=0;
        while(i<s.length()){
            int j=i;
            string temp="";
            while(j<s.length() && s[j]!=' ') temp+=s[j++];
            i=j+1;
            if(temp.length()>=1)
            ans.push_back(temp);
        }
        reverse(ans.begin(),ans.end());
        string res="";
        for(int i=0;i<ans.size();i++){
            res+=ans[i];
            if(i!=ans.size()-1)
            res+=" ";
        }
        return res;
    }
};
