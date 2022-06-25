/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL or head->next==NULL or head->next->next==NULL)
            return head;
        ListNode* odd = head;
        ListNode* curr = head->next;
        ListNode* even = head -> next;
        while(even->next !=NULL and even->next->next!=NULL){
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even ->next;
        }
        if(odd->next->next!=NULL ){
            odd->next = odd->next->next;
            odd = odd->next;
        }
        odd->next = curr;
        even->next = NULL;
        return head;
    }
};