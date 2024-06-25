class Solution {
public:
int solve(vector<vector<int>> &obstacleGrid,int n , int m , vector<vector<bool>> visited , int currRow, int currCol , vector<vector<int>> &dp){
    if(currRow>=n || currCol>=m || visited[currRow][currCol] || obstacleGrid[currRow][currCol]==1) return 0;
    if(currRow==n-1 && currCol==m-1 && obstacleGrid[currRow][currCol]!=1) return 1;
    if(dp[currRow][currCol] != -1) return dp[currRow][currCol];
    visited[currRow][currCol] = true;

    int right = solve(obstacleGrid,n,m,visited,currRow,currCol+1,dp);
    int down  = solve(obstacleGrid,n,m,visited,currRow+1,currCol,dp);
    
    return dp[currRow][currCol]=down + right;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();

        vector<vector<bool>> visited(n,vector<bool>(m,0));
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(obstacleGrid,n,m,visited,0,0,dp);
    }
};
