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
        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }
        vector<int> temp;
        ListNode* temp1 = head;
        while(temp1)
        {
            temp.push_back(temp1->val);
            temp1 = temp1->next;
        }

        int n = temp.size();
        k = k%n;

        vector<int> arr;
        for(int i = n-k;i<n;i++)
        {
            arr.push_back(temp[i]);
        }
        int z = n-1;
        for(int i = n-k-1;i>=0;i--)
        {
            temp[z] = temp[i];
            z--;
        }
        for(int i =0; i<arr.size();i++)
        {
            temp[i] = arr[i];
        }
        temp1 = head;
        int i = 0;
        while(temp1)
        {
           temp1->val = temp[i];
           i++;
           temp1 = temp1->next;
        }
        return head;
        
    }
};