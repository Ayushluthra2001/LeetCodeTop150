class Solution {
public:
    int solve(int i , int j ,vector<vector<char>>& matrix,int n, int m,int& maxi){
        if(i>=n || j>=m ) return 0;

        int right     = solve(i,j+1,matrix, n, m,maxi);
        int down      = solve(i+1,j,matrix,n,m,maxi);
        int diagnoal  = solve(i+1,j+1,matrix,n,m,maxi);
        int curr =0;
        if(matrix[i][j]=='1'){
             curr = 1 + min(right , min(down, diagnoal));
             maxi = max(maxi ,curr);
            return curr;
        }else{

            return 0;
        }
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int maxi = 0;
         solve(0,0,matrix,n,m,maxi);

         return maxi * maxi;
    }
};
