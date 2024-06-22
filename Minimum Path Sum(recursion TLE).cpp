class Solution {
public:
int solve(vector<vector<int>>& gird, int n , int m, int i, int j){
    if(j >= m || i >= n ) return 100000;
    if(i == n-1 && j == m-1) return gird[i][j];
    int down  = 0;
    int right = 0;

    right = gird[i][j] + solve(gird,n,m,i,j+1);
    down  = gird[i][j] + solve(gird,n,m,i+1,j);
    return min(right,down);
}
    int minPathSum(vector<vector<int>>& grid) {
        
        int n     = grid.size();
        int m     = grid[0].size();
       
        
        return solve(grid,n,m,0,0);
    }
};
