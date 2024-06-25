class Solution {
public:
int solve(vector<vector<int>> &obstacleGrid,int n , int m , vector<vector<bool>> visited , int currRow, int currCol){
    if(currRow>=n || currCol>=m || visited[currRow][currCol] || obstacleGrid[currRow][currCol]==1) return 0;
    if(currRow==n-1 && currCol==m-1 && obstacleGrid[currRow][currCol]!=1) return 1;

    visited[currRow][currCol]=true;

    int right = solve(obstacleGrid,n,m,visited,currRow,currCol+1);
    int down  = solve(obstacleGrid,n,m,visited,currRow+1,currCol);
    
    return down + right;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();

        vector<vector<bool>> visited(n,vector<bool>(m,0));
        return solve(obstacleGrid,n,m,visited,0,0);
    }
};
