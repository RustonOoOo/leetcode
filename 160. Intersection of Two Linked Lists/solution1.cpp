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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return nullptr;
        int lenA = 0;
        int lenB = 0;
        ListNode* cur1 = headA, *cur2 = headB;
        for(; cur1 && cur2;) {
            cur1 = cur1->next;lenA++;
            cur2 = cur2->next;lenB++;
        }
        while(cur1){cur1 = cur1->next; lenA++;}
        while(cur2){cur2 = cur2->next; lenB++;}
        int diff = lenB - lenA;
        cur1 = headA;
        cur2 = headB;
        while(diff > 0) {cur2 = cur2->next; diff--;}
        while(diff < 0) {cur1 = cur1->next; diff++;}
        while(cur1 != cur2 && cur1 && cur2) {
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        if(cur1 == cur2)return cur1;
        return nullptr;
    }
};