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
        if(!head)
            return false;
        ListNode* sl = head;
        ListNode* ft = head;
        while(ft->next != NULL and ft->next->next != NULL){
            sl = sl->next;
            ft = ft->next->next;
            if(sl==ft){
                return true;
            }
        }
        return false;
    }
};