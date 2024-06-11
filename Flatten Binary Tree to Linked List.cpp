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
        temp.push_back(root->val);
        solve(temp,root->left);
        solve(temp,root->right);

    }
    void flatten(TreeNode* root) {
        if(root==NULL) return ;
        vector<int>temp;
        solve(temp,root);
       
        TreeNode* t=root;
        for(int i=1;i<temp.size();i++){
            TreeNode* extra=new TreeNode(temp[i]);
            t->right=extra;
            t->left=NULL;
            t=t->right;

        }
        //root=root->right;
        return ;
    }
};
