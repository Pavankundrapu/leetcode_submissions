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
    public boolean check(List<Integer> ls,int k)
    {
        int low = 0;
        int high = ls.size()-1;
        while(low<high)
        {   int sum = ls.get(low)+ls.get(high);
            if( sum == k)
            {
                return true;
            }
            else if(sum > k)
            {
                high--;
            }
            else{
                low++;
            }
        }
        return false;
    }
    public boolean findTarget(TreeNode root, int k) {
        Stack<TreeNode> st = new Stack<>();
        TreeNode curr = root;
        List<Integer> ls = new ArrayList<>();
        while(!st.isEmpty() || curr != null)
        {
            while(curr != null)
            {
                st.add(curr);
                curr = curr.left;
            }
            curr = st.pop();
            ls.add(curr.val);
            curr = curr.right;
        }
        return check(ls,k);
    }
}