class Solution {
public:
bool check(vector<vector<char>>&board,string word, int currRowIndex, int currColIndex, string temp, vector<vector<int>>&visited,int curr){
    
    if( curr>word.length() || currRowIndex>=board.size() || currRowIndex<0 || currColIndex>=board[0].size() || currColIndex<0 || visited[currRowIndex][currColIndex] || word[curr]!=board[currRowIndex][currColIndex]) return false;
    return true;
}
    bool solve(vector<vector<char>>&board,string word,int currRowIndex,int currColIndex, string temp,vector<vector<int>>&visited,int curr){
        if(curr==word.length()) return true;
        if(!check(board,word,currRowIndex,currColIndex,temp,visited,curr)) return false;

        bool left,up,right,down;
        visited[currRowIndex][currColIndex]=true;
        left=solve(board,word,currRowIndex,currColIndex-1,temp+board[currRowIndex][currColIndex],visited,curr+1);
        right=solve(board,word,currRowIndex,currColIndex+1,temp+board[currRowIndex][currColIndex],visited,curr+1);
        up=solve(board,word,currRowIndex-1,currColIndex,temp+board[currRowIndex][currColIndex],visited,curr+1);
        down=solve(board,word,currRowIndex+1,currColIndex,temp+board[currRowIndex][currColIndex],visited,curr+1);
        visited[currRowIndex][currColIndex]=false;

        return left || down || right || up;  
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<int>>visited(board.size(),vector<int>(board[0].size(),0));
       
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
               if( solve(board,word,i,j,"",visited,0))return true;
        }
    }
       return false;
    }
};
