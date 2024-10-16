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
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;
        int sum = 0;
        int carry = 0;
        while(temp1 || temp2)
        {
              sum = carry;
              if(temp1) sum+=temp1->val;
              if(temp2) sum+=temp2->val;
              ListNode* newNode = new ListNode(sum%10);
              current->next = newNode;
              current = current->next;
              carry = sum/10;
              if(temp1)temp1 = temp1->next;
              if(temp2)temp2 = temp2->next;
        }
        if(carry)
        {
            ListNode* newNode = new ListNode(carry);
            current->next = newNode;
            current = current->next;
        }
        return dummy->next;
    }
};