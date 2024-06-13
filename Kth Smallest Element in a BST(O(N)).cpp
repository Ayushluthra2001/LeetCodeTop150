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
    void solve(vector<int>&data,TreeNode* root){
        if(root==NULL) return ;
        solve(data,root->left);
        data.push_back(root->val);
        solve(data,root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>data;
        solve(data,root);
        return data[k-1];
    }
};
