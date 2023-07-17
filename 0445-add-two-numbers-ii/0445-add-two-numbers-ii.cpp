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
    ListNode* reverse(ListNode* l){
        ListNode* curr = l, *prev = NULL, *nxt = NULL;
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* t1, ListNode* t2) {
        if(!t1) return t2;
        if(!t2) return t1;
        ListNode* l1= NULL, *l2=NULL;
        l1 = reverse(t1);
        l2 = reverse(t2);
        int sum = 0, carry =0;
         ListNode* head = new  ListNode(0);
         ListNode *temp = head;
        
        while(l1 and l2){
           sum = (l1->val+l2->val+carry)%10;
           carry = (l1->val+l2->val+carry)/10;
           temp->next  = new  ListNode(sum);
           temp = temp->next ;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1){
           sum = (l1->val+carry)%10;
           carry = (l1->val+carry)/10;
           temp->next  = new  ListNode(sum);
           temp = temp->next ;
            l1 = l1->next;
        }
        while(l2){
           sum = (l2->val+carry)%10;
           carry = (l2->val+carry)/10;
           temp->next  = new  ListNode(sum);
           temp = temp->next ;
            l2 = l2->next;
        }
        if(carry){
           temp->next  = new  ListNode(carry);
           temp = temp->next ;
        }
        return reverse(head->next);
        
    }
};