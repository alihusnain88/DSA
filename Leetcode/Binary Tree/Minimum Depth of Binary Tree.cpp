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
    int minDepth(TreeNode* root) {
        if (!root) {
            return 0; // Empty tree has a minimum depth of 0
        }

        // Use a queue for level-order traversal to find the minimum depth efficiently
        queue<TreeNode*> q;
        q.push(root);
        int depth = 1; // Start with depth 1 for the root

        while (!q.empty()) {
            int levelSize = q.size(); // Number of nodes at the current level

            for (int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front();
                q.pop();

                // If a leaf node is found, return the current depth
                if (!node->left && !node->right) {
                    return depth;
                }

                // Enqueue children for the next level
                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }

            // Increment depth for each level
            depth++;
        }

        // If the loop completes without finding a leaf, it means there are no leaf nodes
        return 0;
    }
};