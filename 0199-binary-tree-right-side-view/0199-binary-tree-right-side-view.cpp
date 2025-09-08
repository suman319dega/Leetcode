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

void right_tree(vector<int>& ans, TreeNode* root, int level) {
    if (root == nullptr) return;
    if (level == ans.size()) {
        ans.push_back(root->val);
    }
    right_tree(ans, root->right, level + 1);
    right_tree(ans, root->left, level + 1);
}

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        right_tree(ans, root, 0);
        return ans;
    }
};
