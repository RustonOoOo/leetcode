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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)return false;
        auto ptr1 = head;
        auto ptr2 = head->next->next;
        while(ptr1 &&  ptr2 && ptr2->next && ptr1 != ptr2) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next->next;
        }
        if(ptr1 == ptr2) return true;
        return false;
    }
};