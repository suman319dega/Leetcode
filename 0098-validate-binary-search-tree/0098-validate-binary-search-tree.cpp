bool valid(TreeNode* root, long long mini, long long maxi) {
    if (!root) return true;
    if (root->val >= maxi || root->val <= mini) return false;
    return valid(root->left, mini, root->val) && valid(root->right, root->val, maxi);
}

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return valid(root, LONG_MIN, LONG_MAX);
    }
};
