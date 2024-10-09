/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root){
        // **** My Implementation 2 ****
        vector<int> v;
        helper(root, v);
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i] >= v[i+1])
            {
                return false;
            }
        }
        return true;
    }
    void helper(TreeNode* root, vector<int>& v)
    {
        if(root)
        {
            helper(root->left, v);
            v.push_back(root->val);
            helper(root->right, v);            
        }
    }


































        // ***** My Implementation 1 *****
        // 77 / 85 testcases passed
        // -----------------------
        //   if(!root)
        //   {
        //     return true;
        //   }
        //   if(isValidBST(root->left) && isValidBST(root->right))
        //   {
        //     if(root->left && root->left->val >= root->val)
        //     {
        //         return false;
        //     }
        //     if(root->right && root->right->val <= root->val)
        //     {
        //         return false;
        //     }
        //     return true;
        //   }
        //   return false;
        // }
        // ------------------




// -----------------------------------------------------------------        
// -----------------------------------------------------------------        
        // **** GFG Implementation ****
//         if (root == nullptr)
//         return true;

//     // false if the max of the left is > than us
//     if (root->left != nullptr && 
//         maxValue(root->left) >= root->val)
//         return false;

//     // false if the min of the right is <= than us
//     if (root->right != nullptr && 
//         minValue(root->right) <= root->val)
//         return false;

//     // false if, recursively, the left or 
//     // right is not a BST
//     if (!isValidBST(root->left) || !isValidBST(root->right))
//         return false;

//     // passing all that, it's a BST
//     return true;
// }
//         int maxValue(TreeNode * node)
//         {
//             if (node == nullptr) 
//             return INT16_MIN;
//             return max({node->val, maxValue(node->left), maxValue(node->right)});
//         }       
//         int minValue(TreeNode* node) 
//         {
//             if (node == nullptr)
//             return INT16_MAX;
//             return min({node->val, minValue(node->left), minValue(node->right)});
//         }
// -----------------------------------------------------------------        
// ----------------------------------------------------------------- 
       
};