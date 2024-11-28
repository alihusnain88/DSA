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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector <int> result;
        toVector(root1, result);
        toVector(root2, result);

        sort(result.begin(), result.end());
        return result;        
    }
    void toVector(TreeNode* root, vector<int>& v)
    {
        if(!root)
        {
            return;
        }
        toVector(root->left, v);
        v.push_back(root->val);
        toVector(root->right, v);
    }
};

