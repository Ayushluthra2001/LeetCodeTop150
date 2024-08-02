class Solution {
public:
    int solve(string word1, string word2, int n , int m){
        if(n<0 || m<0 ){
            if(n<0) return m+1;
            if(m<0) return n+1;
        }

        if(word1[n] == word2[m]){
            return 0 + solve(word1,word2,n-1,m-1);
        }else{

            int replace = 1 + solve(word1,word2,n-1,m-1);
            int remove  = 1 + solve(word1,word2,n-1,m);
            int insert  = 1 + solve(word1,word2,n,m-1);

            return min(insert, min(replace,remove));
        }

        return 0;
    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        return solve(word1,word2,n-1,m-1);
    }
};
