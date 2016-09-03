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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode dummy(0);
        ListNode* pre = &dummy;
        for(ListNode* node1 = head, * node2 = head->next; node1 && node2;) {
            ListNode* node2next = node2->next; 
            pre->next = node2;
            node2->next = node1;
            node1->next = node2next;
            pre = node1;
            if(!node2next)break;
            node1 = node2next;
            node2 = node2next->next;
        }
        return (&dummy)->next;
    }
};