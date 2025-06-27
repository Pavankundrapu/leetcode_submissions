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
    public List<Integer> inorderTraversal(TreeNode root) {
       List<Integer> ls = new ArrayList<>();
       Stack<TreeNode> st = new Stack<>();
       TreeNode curr = root;
       while(!st.isEmpty() || curr != null)
       {
             while(curr != null)
             {
                 st.add(curr);
                 curr = curr.left;
             }
             curr = st.peek();
             ls.add(curr.val);
             st.pop();
             curr = curr.right;
       } 
       return ls;
    }
}