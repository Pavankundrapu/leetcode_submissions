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
    ListNode* middleNode(ListNode* head) {
        if(head == nullptr)
        {
            return nullptr;
        }
        ListNode* jump1 = head;
        ListNode* jump2 = head;
        while(jump2 != nullptr && jump2->next !=nullptr)
        {
            jump1 = jump1->next;
            jump2 = jump2->next->next;
        }
        return jump1; 
    }
};