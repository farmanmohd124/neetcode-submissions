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
    bool ans = true;
    int helper(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lh = helper(root->left);
        int rh = helper(root->right);

        if(abs(lh-rh)>1){
            ans = false;
        }
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        int help= helper(root);
        return ans;
    }
};
