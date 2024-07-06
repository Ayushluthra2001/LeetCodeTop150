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

// finding the position of current root in inorder array
int findPos(int x, vector<int>& inorder){
    int index =-1;
    for(int i=0;i<inorder.size();i++){
        if(inorder[i]==x) return i;
    }
    return index;
}
    TreeNode* createTree(int start , int end , int& index , vector<int>& preorder, vector<int>& inorder){
        
        // base cases
        if(start > end ) return NULL;
        if(index >= preorder.size()) return NULL;

        // creating a root
        TreeNode* root = new TreeNode(preorder[index]);
        
        // finding the root node in inorder traversal 
        int find = findPos(preorder[index],inorder);
        index++;

        // root ->left child will always be on left in inorder array
        root->left  = createTree(start,find-1,index,preorder,inorder);
         // root ->right child will always be on right on inorder array 
        root->right = createTree(find+1,end,index,preorder,inorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int start = 0;
        int end   = preorder.size()-1;
        int index = 0;
        return createTree(start, end, index, preorder, inorder);
    }
};
