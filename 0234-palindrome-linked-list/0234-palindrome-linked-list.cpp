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
    ListNode* reverse(  ListNode* curr)
    {
        ListNode* prev=NULL,*nxt = NULL;
        while(curr)
        {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return true;
       ListNode* slow = head, *fast = head;
        while(fast and fast->next)
        {
           
            slow = slow->next;
            fast = fast->next->next;
        }
       
        ListNode* mid = slow,*temp;
        temp = reverse(mid);
        while(temp)   // temp will reach at the end first
        {
           if(head->val != temp->val)
               return false;
           
            head = head->next;
            temp= temp->next;
            
        }
        return true;
    }
};