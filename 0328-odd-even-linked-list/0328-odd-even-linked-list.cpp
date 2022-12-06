/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* oddEvenList(ListNode *head)
        {
            if (!head || !head->next || !head->next->next) return head;
            ListNode *temp = head->next, *temp2 = head->next, *temp1 = head;
            while (temp1 and temp1->next)
            {
                if (!temp1->next->next) break;
                temp1->next = temp1->next->next;
                temp1 = temp1->next;
                temp->next = temp1->next;
                temp = temp->next;
            }

            temp1->next = temp2;
            return head;
        }
};