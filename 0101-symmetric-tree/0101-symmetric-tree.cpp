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

bool mirror(TreeNode* left, TreeNode* right) {
    if(!left && !right) return true;
    if(!left && right) return false;
    if(left && !right) return false;

    if(left -> val != right -> val) return false;
    return mirror(left->left, right->right) && mirror(left->right, right->left);
}

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        bool ans = mirror(root -> left,root -> right);
        return ans;
    }
};