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
    public TreeNode insert(TreeNode root,int x)
    {
        TreeNode temp = new TreeNode(x);
        if(root == null) return temp;
        TreeNode curr = root;
        TreeNode prev = null;
        while(curr != null)
        {
            prev = curr;
            if(curr.val > x)
            {
                 curr = curr.left;
            }
            else
            {
                curr = curr.right; 
            }
        }
        if(prev.val > x) prev.left = temp;
        else prev.right = temp;
        return root;
    }
    public TreeNode bstFromPreorder(int[] preorder) {
        TreeNode root = null;
        for(int i = 0;i<preorder.length;i++)
        {
            root = insert(root,preorder[i]);
        }
        return root;
    }
}