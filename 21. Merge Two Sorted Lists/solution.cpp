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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode temp(0);
        ListNode* dump = &temp;
        while(l1 && l2) {
            if(l1->val < l2->val) {
                dump->next = l1;
                l1 = l1->next;
            }
            else {
                dump->next = l2;
                l2 = l2->next;
            }
            dump = dump->next;
        }
        dump->next = l1 ? l1 : l2;
        return (&temp)->next;
    }
};