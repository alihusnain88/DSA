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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(!root)
        {
            return nullptr;
        }
        if(root->val >= low && root->val <= high)
        {
            root->left = trimBST(root->left, low, high);
            root->right = trimBST(root->right, low, high);
        }
        else if(root->val < low)
        {
            root->left = nullptr; //Discard its left part which is still lesser
            root = root->right;
            root = trimBST(root, low, high);
        }
        else if(root->val > high)
        {
            root->right = nullptr; //Discard its right part which is still greater
            root = root->left;
            root = trimBST(root, low, high);
        }
        return root;
    }
};