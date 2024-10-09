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
    bool isSymmetric(TreeNode* root) {
        if(!root || (!root->left && !root->right))        
        {
            return true;
        }
        return areEqual(root->left, root->right);
    }
    bool areEqual(TreeNode* left, TreeNode* right)
    {
        if(!left && !right)
        {
            return true;
        }
        if((!left&&right) || (!right&&left))
        {
            return false;
        }
        if(left->val != right->val)
        {
            return false;
        }
       
        if(!areEqual(left->left, right->right))
        {
            return false;
        }
        return areEqual(left->right, right->left);
    }
};