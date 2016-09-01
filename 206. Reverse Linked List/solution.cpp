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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* next = head->next->next;
        ListNode* cur = head->next;
        head->next = nullptr;
        while(cur && cur->next) {
            cur->next = head;
            head = cur;
            //next = next;
            cur = next;
            next = cur->next;
        }
        cur->next = head;//最后一个节点
        return cur;
    }
};