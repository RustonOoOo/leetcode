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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* cur = head;
        ListNode* next = cur->next;
        while(cur && next) {
            if(cur->val == next->val) {
                cur->next = next->next;
                delete next;
                next =cur->next;
            }
            else {
                cur= next;
                next = cur->next;
            }
        }
        return head;
    }
};