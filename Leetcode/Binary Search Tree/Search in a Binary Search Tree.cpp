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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root)
        {
            return nullptr;
        }
        TreeNode* subtree = nullptr;
        if(root->val == val)
        {
            subtree = root;
        }
        if(root->val < val)
        {
            subtree = searchBST(root->right, val);
        }
        else if(val < root->val)
        {
            subtree = searchBST(root->left, val);
        }
        return subtree;
    }
};