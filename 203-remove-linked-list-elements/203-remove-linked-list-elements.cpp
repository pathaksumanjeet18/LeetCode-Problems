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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr!=NULL){
            if(curr==head and head->val == val){
                curr = curr->next;
                head = curr;
            }
            else if(curr->val == val){
                if(curr->next==NULL){
                    curr = curr->next; 
                    prev->next = curr;
                }
                else{
                    curr = curr->next;
                }
            }
            else{
                if(prev==NULL)
                    prev = curr;
                else{
                    prev->next = curr;
                    prev = prev->next;
                }
                curr = curr->next;
                 
            }
        }
        return head;
    }
};