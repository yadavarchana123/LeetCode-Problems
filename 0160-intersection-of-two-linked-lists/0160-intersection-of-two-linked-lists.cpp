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
        if(!headA || !headB)
            return NULL;
        ListNode* slow = headA, *fast = headB;
        while(slow and fast){
            if(slow == fast)
                return slow;
            slow = slow->next;
            fast = fast->next;
            
             if(!slow and !fast)
                return NULL;
            if(!slow){
                slow = headB;
            }
            if(!fast){
                fast = headA;
            }
            
        }
        
        return NULL;
    }
};