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
    TreeNode* solve(TreeNode* root){
        if(root==NULL) return NULL;
        if(root->left==NULL && root->right==NULL) return root;        
        TreeNode* r=solve(root->left);
        TreeNode* l=solve(root->right);
        root->left=l;
        root->right=r;
        return root;
    }
    TreeNode* invertTree(TreeNode* root) {
        return solve(root);
    }
};
