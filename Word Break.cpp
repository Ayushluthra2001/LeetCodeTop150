class Solution {
public:
    bool solve(int index , string s, unordered_set<string>&wordSet,vector<int>&dp){
        if(index>=s.length()) return true;
        if(dp[index]!=-1) return dp[index];
        if(wordSet.find(s)!=wordSet.end()) return true;
        for(int i=1;i<=s.length();i++){
            string temp = s.substr(index,i);
            if(wordSet.find(temp)!=wordSet.end() && solve(index+i,s,wordSet,dp)) return dp[index] = true;


        }
        return dp[index] =false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();
        unordered_set<string>wordSet;
        for(auto i : wordDict) wordSet.insert(i);
        vector<int>dp(s.length(),-1);

        return solve(0,s,wordSet,dp);
    }
};
