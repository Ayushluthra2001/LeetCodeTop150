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
void solve(vector<int>&temp,TreeNode* root){
    if(root==NULL) return ;
    solve(temp,root->left);
    temp.push_back(root->val);
    solve(temp,root->right);
}
    bool isValidBST(TreeNode* root) {
        vector<int>temp;
        solve(temp,root);
        for(int i=1;i<temp.size();i++){
            if(temp[i]<=temp[i-1]) return false;
        }
        return true;
    }
};
