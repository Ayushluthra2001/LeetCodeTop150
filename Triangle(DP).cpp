
class Solution {
public:
    int solve(int index , vector<vector<int>>& triangle, int currRow , int size){
        if( currRow >= size) return 0;
       
        int down      = triangle[currRow][index]+solve(index,triangle,currRow+1,size);
        int downRight = triangle[currRow][index]+solve(index+1,triangle,currRow+1,size);
        return min(down,downRight);
       
        
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        return solve(0,triangle,0,triangle.size());
    }
};
