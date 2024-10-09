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
    TreeNode* bstToGst(TreeNode* root) {
        int count = 0;
        helper(root, count);
        return root;
    }
    void helper(TreeNode* &root, int &count)
    {
        if(!root)
        {
            return ;
        }
        helper(root->right, count);
        root->val += count; //First add to root
        count += root->val - count; // Then increment count with root's original value
        helper(root->left, count);
    }
};