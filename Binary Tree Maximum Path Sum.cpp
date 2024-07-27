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
    int solve(TreeNode* root, int &maxi){
        if(root==NULL) return 0;
       
        int left = solve(root->left,maxi);
        int right = solve(root->right,maxi);
        if(left<0) left =0 ;
        if(right<0) right=0;
         int total = left + right + root->val;
       
         maxi = max(maxi,total);
        
      
        return root->val + max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        
        int maxi = INT_MIN;
         solve(root,maxi);
         return maxi;
    }
};
