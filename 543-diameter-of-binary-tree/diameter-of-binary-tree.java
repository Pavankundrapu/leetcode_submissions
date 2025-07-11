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
    int maxi = 0;
    public int check(TreeNode root)
    {
        if(root == null) return 0;
        int lh = check(root.left);
        int rh = check(root.right);
        maxi = Math.max(lh+rh,maxi);
        return 1+Math.max(lh,rh);
    } 
    public int diameterOfBinaryTree(TreeNode root)
    {
        check(root);
        return maxi;
    }
}