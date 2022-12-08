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
void solve(TreeNode *root , vector<int>&v){

    if(!root){
        return ;
    }

    if(!root->left and !root->right){
        v.push_back(root->val);
    }

    solve(root->left , v);
    solve(root->right , v);
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v;
        vector<int>v2;
        solve(root1 , v);
        solve(root2 , v2);

        return v==v2? true : false;
    }
};