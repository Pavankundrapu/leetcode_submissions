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
    public boolean findTarget(TreeNode root, int k) {
        ArrayList<Integer> ans = new ArrayList<>();
        Stack<TreeNode> st = new Stack<>();
        TreeNode temp = root;
        while(!st.empty() || temp != null)
        {
            while(temp != null)
            {
                st.push(temp);
                temp = temp.left;
            }   
                ans.add(st.peek().val);
                temp = st.peek().right;
                st.pop();
        }

        int i = 0;
        int j = ans.size()-1;
        int sum;
        while(i<j)
        {   sum = ans.get(i)+ans.get(j);
            if(sum == k)
            {
                return true;
            }
            else if(sum > k)
            {
                j--;
            }
            else
            {
                i++;
            }
        } 
        return false;
        
    }
}