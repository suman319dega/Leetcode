class Solution {
    private int sum = 0;

    public void dfs(TreeNode root) {
        if (root == null) return;
        
        if (root.left != null && root.left.left == null && root.left.right == null) {
            sum += root.left.val;
        }

        dfs(root.left);
        dfs(root.right);
    }

    public int sumOfLeftLeaves(TreeNode root) {
        sum = 0;
        dfs(root);
        return sum;
    }
}