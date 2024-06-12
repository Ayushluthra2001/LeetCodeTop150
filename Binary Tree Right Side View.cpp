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
    void solve(TreeNode* root,map<int,int>&mapping,int level ){
        if(root==NULL) return ;
        solve(root->left,mapping,level+1);
        mapping[level]=root->val;
        solve(root->right,mapping,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        map<int,int>mapping;
        solve(root,mapping,0);
        vector<int>ans;
        for(auto i : mapping) ans.push_back(i.second);
        return ans;
    }
};
