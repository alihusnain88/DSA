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
    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        return helper(root, k, count);
    }

    int helper(TreeNode* root, int k, int& count) {
        if (!root) {
            return -1; // Indicate no kth smallest element found
        }

        int left = helper(root->left, k, count);
        if (left != -1) {
            return left; // Found kth smallest element on the left subtree
        }

        count++;
        if (count == k) {
            return root->val; // Found kth smallest element at the current node
        }

        return helper(root->right, k, count); // Continue searching on the right subtree
    }
};