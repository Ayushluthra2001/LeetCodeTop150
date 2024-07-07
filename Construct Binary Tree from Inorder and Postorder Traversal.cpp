/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findPos(int x , vector<int>& inorder){
        for(int i=0 ;i<inorder.size(); i++){
            if(x == inorder[i]) return i;
        }
        return -1;
    }
    TreeNode* solve(int& index ,int start , int end, vector<int>& inorder, vector<int>& postorder){

        if(index < 0) return NULL;
        if(start > end) return NULL;

        TreeNode* root = new TreeNode(postorder[index]);

        int find = findPos(postorder[index],inorder);
        index--;
       
        
        root->right= solve(index, find+1, end,   inorder, postorder);
        root->left = solve(index, start, find-1, inorder, postorder);

        

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int index = postorder.size()-1;
        int start = 0;
        int end   = inorder.size()-1;

        return solve(index, start , end , inorder, postorder);


    }
};
