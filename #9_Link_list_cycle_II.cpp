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
        if(!head)return head;
        
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *dummy = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                while(dummy != slow){
                    dummy = dummy->next;
                    slow = slow->next;
                }
                return dummy;
            }
        }
        
        return NULL;
    }
};