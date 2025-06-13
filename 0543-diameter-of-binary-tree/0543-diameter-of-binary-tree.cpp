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

int height(TreeNode* root,int &ans) {
    if(root == nullptr) return 0;
    int left_h = height(root -> left,ans);
    int right_h = height(root -> right,ans);
    ans = max(ans,(right_h + left_h));
    return 1 + max(left_h,right_h);
}

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        int ans = -1;
        height(root,ans);
        return ans;
    }
};