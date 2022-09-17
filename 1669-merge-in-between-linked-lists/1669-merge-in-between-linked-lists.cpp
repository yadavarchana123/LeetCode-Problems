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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* list = new ListNode(0);
        ListNode* ptr = list; int k = a;
        while(list1 and k--)
        {
           ptr->next =  new ListNode(list1->val);
           ptr = ptr->next;
           list1 = list1->next;
        }
        while(list2)
        {
            ptr->next =  new ListNode(list2->val);
            ptr = ptr->next;
            list2 = list2->next;
        }
        while(list1 and a != b+1)
        {
            list1 = list1->next;
            a++;
        }
        while(list1)
        {
            ptr->next =  new ListNode(list1->val);
            ptr = ptr->next;
            list1 = list1->next;
        }
        return list->next;
    }
};