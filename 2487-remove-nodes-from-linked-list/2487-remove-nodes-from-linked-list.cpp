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
        ListNode* reverse(ListNode *list)
        {
            if (!list || !list->next)
                return list;
            ListNode *curr = list, *nxt = NULL, *prev = NULL;
            while (curr)
            {
                nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
            }
            return prev;
        }
    ListNode* removeNodes(ListNode *head)
    {
        head = reverse(head);
        ListNode *temp = head;
        while (temp and temp->next)
        {
            if (temp->val > temp->next->val)
                temp->next = temp->next->next;
            else
                temp = temp->next;
        }
        head = reverse(head);
        return head;
    }
};