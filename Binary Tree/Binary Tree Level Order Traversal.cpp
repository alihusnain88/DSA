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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(!root)
        {
            return v;
        }
        queue<TreeNode*> q;
        q.push(root);
            // v.push_back({root->val});
        while(!q.empty())
        {
            v.push_back({});
            int qsize = q.size();
            for(int i=0; i<qsize; i++)
            {
            TreeNode* temp = q.front();
            q.pop();
            
            v.back().push_back(temp->val);
                if(temp->left)
                {
                    q.push(temp->left);
            // v.back().push_back(temp->left->val);
                }
                if(temp->right)
                {
                    q.push(temp->right);
            // v.back().push_back(temp->right->val);
                }
            }
        }
        return v;

        
    }
};
