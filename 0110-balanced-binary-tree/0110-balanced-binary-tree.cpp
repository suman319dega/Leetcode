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

int height(TreeNode* root) {
    if(root == nullptr) return 0;
    int left_height = height(root -> left);
    int right_height = height(root -> right);
    return 1 + max(left_height,right_height);
}

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        int left_h = height(root -> left);
        int right_h = height(root -> right);
        if(abs(left_h - right_h) > 1) return false;
        bool  a = isBalanced(root -> left);
        bool b = isBalanced(root -> right);
        return a && b;

    }
};