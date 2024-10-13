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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int size = preorder.size();
        TreeNode* root = nullptr;
        for(int i:preorder)
        {
           insert(root, i);
        }
        return root;
    }
    // Trying it with void return type :))
    void insert(TreeNode* &root, int val)
    {
        if(!root)
        {
            root = new TreeNode(val);
        }
        if(root->left && val < root->val)
        {
            insert(root->left, val);
        }
        else if(root->right && root->val < val)
        {
            insert(root->right, val);
        }
        if(!root->left && val < root->val)
        {
            root->left = new TreeNode(val);
        }
        if(!root->right && root->val < val)
        {
            root->right = new TreeNode(val);
        }
    }
};