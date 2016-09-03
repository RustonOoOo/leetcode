
  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode next;
      ListNode(int x)  val(x), next(NULL) {}
  };
 
class Solution {
public
    bool hasCycle(ListNode head) {
        unordered_setListNode set;
        while(head) {
            bool insert_suc = set.insert(head).second;
            head = head-next;
            if(!insert_suc)
                return true;
        }
        return false;
    }
};