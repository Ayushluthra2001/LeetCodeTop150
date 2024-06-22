class Solution {
public:
int solve(vector<vector<int>>& gird, int n , int m, int i, int j, vector<vector<int>>&dp){
    if(j >= m || i >= n ) return 100000;
    if(i == n-1 && j == m-1) return gird[i][j];
    
    if(dp[i][j] != -1) return dp[i][j];
    int down  = 0;
    int right = 0;

    right = gird[i][j] + solve(gird,n,m,i,j+1,dp);
    down  = gird[i][j] + solve(gird,n,m,i+1,j,dp);
    return dp[i][j] = min(right,down);
}
    int minPathSum(vector<vector<int>>& grid) {
        
        int n     = grid.size();
        int m     = grid[0].size();

        vector<vector<int>>dp(n,vector<int>(m,-1));
        
        return solve(grid,n,m,0,0,dp);
    }
};
