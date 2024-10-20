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
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }
        vector<int> ans;
        ListNode* temp = head;
        while(temp)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;
        for(int  i = 0;i<ans.size();i++)
        {
            ListNode* NewNode = new ListNode(ans[i]);
            current->next = NewNode;
            current = current->next;
        }
        return dummy->next;
    }
};