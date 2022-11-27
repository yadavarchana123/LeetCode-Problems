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
    ListNode*  reverse(ListNode* list)
    {
        if(!list || !list->next)
            return list;
        ListNode* curr= list, *nxt=NULL, *prev=NULL;
        while(curr)
        {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        if(!head || !head->next) return head;
        int maxi = INT_MIN;
        stack<int>s;
        ListNode* newlist = new ListNode(0);
        ListNode* ptr = newlist, *temp;
        temp = reverse(head);
        while(temp)
        {
            if(maxi < temp->val)
                 maxi = temp->val;
            if(maxi <= temp->val)
                s.push(temp->val);
            temp= temp->next;
        }
        while(!s.empty())
        {
            ptr->next = new ListNode(s.top()); 
            ptr = ptr->next;
            s.pop();
        }
     
        return newlist->next;
    }
};