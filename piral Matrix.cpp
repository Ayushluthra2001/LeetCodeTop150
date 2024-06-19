class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int k=0;
        int n=matrix.size();
        int m=matrix[0].size();
        int startingRow=0;
        int endingRow=n-1;
        int startingCol=0;
        int endingCol=m-1;
        vector<int>ans;
        
        while(k<n*m){
            for(int i=startingCol;i<=endingCol;i++){
                ans.push_back(matrix[startingRow][i]);
                k++;
            }
            if(k>=n*m) return ans;
            startingRow++;
            for(int i=startingRow;i<=endingRow;i++){
                ans.push_back(matrix[i][endingCol]);
                k++;

            }
            if(k>=n*m) return ans;
            endingCol--;
            for(int i=endingCol;i>=startingCol;i--){
                ans.push_back(matrix[endingRow][i]);
                k++;
            }
            endingRow--;
            if(k>=n*m) return ans;
            for(int i=endingRow;i>=startingRow;i--){
                ans.push_back(matrix[i][startingCol]);
                k++;
            }
            if(k>=n*m) return ans;
            startingCol++;
        }

        return ans;
    }
};
