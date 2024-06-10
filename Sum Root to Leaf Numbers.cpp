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
void solve(TreeNode* root, string temp,int &sum){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL){
        string curr=temp+to_string(root->val);
       
        sum+=stoi(curr);
        return ;
    }
    solve(root->left,temp+to_string(root->val),sum);
    solve(root->right,temp+to_string(root->val),sum);
}
    int sumNumbers(TreeNode* root) {
            // unordered_map<string,int>mapping;

            // return mapping.size();
            int sum=0;

          solve(root,"",sum);
            return sum; 
    }
};
