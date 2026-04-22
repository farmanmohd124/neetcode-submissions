class Solution {
public:
    TreeNode* ans = NULL; // Member variable

    void helper(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) return;

        if (root->val > p->val && root->val > q->val) {
            helper(root->left, p, q);
        } 
        else if (root->val < p->val && root->val < q->val) {
            helper(root->right, p, q);
        } 
        else {
            // This is the split point, or root is p or q
            ans = root;
            return;
        }
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        ans = NULL; // IMPORTANT: Reset for every test case
        helper(root, p, q);
        return ans;
    }
};