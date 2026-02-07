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

void dfs(set<int> &s, TreeNode* root) {
    if(!root) return;
    s.insert(root -> val);
    dfs(s,root -> left);
    dfs(s,root -> right);
}

class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        set<int> s;
        dfs(s,root);
        vector<int> arr(s.begin(),s.end());
        if(arr.size() > 1) return arr[1];
        else return -1;
    }
};