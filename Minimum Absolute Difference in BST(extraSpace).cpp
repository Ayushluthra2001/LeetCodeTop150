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
    int getMinimumDifference(TreeNode* root) {
        vector<int>temp;
        solve(temp,root);
        int mini=INT_MAX;
        for(int i=1;i<temp.size();i++){
            mini=min(mini,abs(temp[i]-temp[i-1]));
        }
        return mini;
    }
};
