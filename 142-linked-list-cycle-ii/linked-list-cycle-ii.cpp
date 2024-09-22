/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr)
        {
            return nullptr;
        }
        unordered_set<ListNode*> mpp;
        ListNode* temp = head;
        while(temp)
        {
            if(mpp.find(temp) != mpp.end())
            {
                return temp;
            }
            mpp.insert(temp);
            temp = temp->next;
        }
        return nullptr;
    }
};