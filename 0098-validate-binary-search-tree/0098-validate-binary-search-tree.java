/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {

    public void preorder(TreeNode root, List<Integer> list) {
        if(root == null) return;
        if(root.left != null) preorder(root.left,list);
        list.add(root.val);
        if(root.right != null) preorder(root.right,list);

    }


    public boolean isValidBST(TreeNode root) {
        ArrayList<Integer> list = new ArrayList<>();
        preorder(root,list);
        int n = list.size();
        for(int i=0; i<n-1; i++) {
            if(list.get(i) >= list.get(i+1)) return false;
        }
        return true;
    }
}