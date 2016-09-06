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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;
        if(!head) return head;
        ListNode* front = NULL;
        for(front = &dummy; n > 0; n--)front = front->next;
        ListNode* cur = NULL;
        for(cur = &dummy; front->next != NULL; cur = cur->next, front = front->next );
        cur->next = cur->next->next;
        return (&dummy)->next;
    }
};