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
       if(head == nullptr || head->next == nullptr)
       {
        return nullptr;
       } 
       ListNode* temp = head;
       unordered_set<ListNode*> st;
       while(temp)
       {
        if(st.find(temp) != st.end())
        {
            return temp;
        }
        st.insert(temp);
        temp = temp->next;
       }
       return nullptr;
    }
};