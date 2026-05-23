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
void traverse(TreeNode* root, vector<int> &arr) {
    if(!root) return;
    if(!root -> left && !root -> right) arr.push_back(root -> val);
    traverse(root -> left,arr);
    traverse(root -> right,arr);
}

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> nums1, nums2;
        traverse(root1, nums1);
        traverse(root2, nums2);

        return nums1 == nums2;
    }
};