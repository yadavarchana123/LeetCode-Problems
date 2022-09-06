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
  void mergesort(ListNode* &head)
    {
        ListNode * curr=head;
        ListNode * first,*second;
        if(!curr||!curr->next)
            return;
        findmid(curr,first,second);
        mergesort(first);
        mergesort(second);
        head = mergeboth(first,second);
        
    }
    void findmid(ListNode * curr, ListNode* &first,ListNode * &second)
    {
        ListNode * fast, * slow;
        slow=curr;
        fast=curr->next;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                slow=slow->next;
                fast=fast->next;
            }
        }
        first=curr;
        second=slow->next;
        slow->next=NULL;
    }
    ListNode * mergeboth(ListNode * first, ListNode * second)
    {
        if(!first)
        {
            return second;
        }
        if(!second)
        {
            return first;
        }
        if(first->val<=second->val)
        {
            first->next=mergeboth(first->next,second);
            return first;
        }
        else
        {
            second->next=mergeboth(first,second->next);
            return second;
        }
      
    }
    ListNode* sortList(ListNode* head) {
        mergesort(head);
        return head;
     }
};