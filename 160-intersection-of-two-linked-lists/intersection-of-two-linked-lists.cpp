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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,bool> mpp;
        ListNode* temp = headA;
        while(temp)
        {
            mpp[temp] = true;
            temp = temp->next;
        }
        temp = headB;
        while(temp)
        {
            if(mpp.find(temp) != mpp.end())
            {
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;
    }
};