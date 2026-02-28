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
    int sum = 0;
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
       if(!root) return false;
       sum += root -> val;
       if(!root -> left && !root -> right) {
        if(sum == targetSum) return true;
       }

       bool a = hasPathSum(root -> left,targetSum);
       bool b = hasPathSum(root -> right,targetSum);

       sum -= root -> val;

       return a || b;

    }
};