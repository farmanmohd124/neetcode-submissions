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
    int ans =0;
    int helper (TreeNode*root){
        if(root==NULL){
            return 0;
        }
        ans = max(ans,(helper(root->left) + helper(root->right)));
        return max(helper(root->left)+1, helper(root->right)+1);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int abs = helper(root);
        return ans;
    }
};
