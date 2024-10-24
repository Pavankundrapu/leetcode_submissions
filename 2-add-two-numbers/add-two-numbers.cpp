/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int sum = 0;
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;
        dummy->next = current;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        while(temp1 || temp2)
        {   sum = carry;
            if(temp1) sum+=temp1->val;
            if(temp2) sum+=temp2->val;

            ListNode* newnode = new ListNode(sum%10);
            current->next = newnode;
            current = newnode;

            carry = sum/10;
            if(temp1) temp1 = temp1->next;
            if(temp2) temp2 = temp2->next; 
        }
        if(carry)
        {
            ListNode* newnode = new ListNode(carry);
            current->next = newnode;
            current = newnode;
        }
        return dummy->next;
        
    }
};