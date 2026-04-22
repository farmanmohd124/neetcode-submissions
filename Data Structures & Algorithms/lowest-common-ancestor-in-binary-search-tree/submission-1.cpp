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
    TreeNode* ans = NULL;
    void helper(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL){
            return;
        }
   

        if(root-> val > p->val && root->val>q->val){
            helper(root->left, p,q);
        }

       else if(root-> val <p->val && root->val<q->val){
            helper(root->right , p,q);
        }
        else
        {
            ans = root;
            return;
        }    
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        helper(root, p,q);
        return ans;
    }
};
