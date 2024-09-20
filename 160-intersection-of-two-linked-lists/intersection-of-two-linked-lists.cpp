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

    ListNode* intersect(ListNode *smaller, ListNode *larger, int d) {
        ListNode* temp = larger;
        
        // Move the larger list ahead by 'd' steps
        while (d--) {
            temp = temp->next;
        }
        
        ListNode* temp2 = smaller;
        
        // Traverse both lists and look for the intersection point
        while (temp && temp2) {
            if (temp == temp2) {
                return temp;
            }
            temp = temp->next;
            temp2 = temp2->next;  // Corrected this part
        }
        
        // If no intersection is found
        return nullptr;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp = headA;
        int n1 = 0;
        
        // Calculate the length of the first list
        while (temp) {
            n1++;
            temp = temp->next;
        }
        
        temp = headB;
        int n2 = 0;
        
        // Calculate the length of the second list
        while (temp) {
            n2++;
            temp = temp->next;
        }
        
        // If the first list is longer, move its pointer ahead by the difference in lengths
        if (n1 > n2) {
            return intersect(headB, headA, n1 - n2);
        } 
        // If the second list is longer, move its pointer ahead
        else {
            return intersect(headA, headB, n2 - n1);
        }
    }
};
