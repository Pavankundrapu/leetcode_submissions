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
    ListNode* rotateRight(ListNode* head, int k) {
         if (!head || !head->next || k == 0) {
            return head;
        }

        // Compute the length of the list and get the last node
        ListNode* tail = head;
        int length = 1;
        while (tail->next) {
            tail = tail->next;
            length++;
        }

        // Effective rotations
        k = k % length;
        if (k == 0) {
            return head;
        }

        // Find the new tail (length - k - 1)-th node
        ListNode* newTail = head;
        for (int i = 0; i < length - k - 1; ++i) {
            newTail = newTail->next;
        }

        // Set the new head
        ListNode* newHead = newTail->next;

        // Break the list and rotate
        newTail->next = nullptr;
        tail->next = head;

        return newHead;

    }
};