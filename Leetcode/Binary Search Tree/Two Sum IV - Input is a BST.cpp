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
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        inorderTraversal(root, v);
        int left = 0;
        int right = v.size()-1;
        while(left < right)
        {
            int currSum = v[left] + v[right];
            if(currSum == k)
            {
                return true;
            }
            else if(currSum > k)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return false;
    }
    void inorderTraversal(TreeNode* root, vector<int>& v)
	{
		if(root)
        {
		inorderTraversal(root->left,v);
		v.push_back(root->val);
		inorderTraversal(root->right, v);
        }
	}
};