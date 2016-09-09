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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)return nullptr;
        ListNode dummy(0);
        dummy.next = head;
        ListNode* pre = &dummy, *cur = head;
        while(cur) {
            ListNode* next = cur->next;
            if(val == cur->val) {
                pre->next = next;
                delete cur;
                //pre = pre->next;
            }
            else {
                pre = pre->next;
            }
            cur = next;
        }
        return dummy.next;
    }
};