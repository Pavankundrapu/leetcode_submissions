/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        if(head == null || head.next == null)
        {
            return true;
        }
        Stack<Integer> st = new Stack<Integer>();
        ListNode temp = head;
        while(temp != null)
        {
            st.push(temp.val);
            temp = temp.next;
        }
        temp = head;
        while(temp != null || !st.empty())
        {
            if(st.peek() != temp.val)
            {
                return false;
            }
            st.pop();
            temp = temp.next;
        }
        return true;
    }
    
}