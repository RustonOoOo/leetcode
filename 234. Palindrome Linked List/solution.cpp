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
    static bool isPalindrome(ListNode* head) {
        if(!head || !head->next)return true;
        ListNode* slow = head, *fast = head;
        while(fast && fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* pre = slow->next;
        ListNode* next = NULL;
        ListNode* cur = pre->next;
        pre->next = NULL;
        while(cur) {
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        while(pre && head ) {
            if(pre->val != head->val)
                return false;
            pre = pre->next;
            head = head->next;
        }
        return true;
    }
};
