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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = head;
        while(curr!=NULL){
            if(curr->next!=NULL and curr->val == curr->next->val ){
                while(prev->val==curr->val){
                    
                    curr=curr->next;
                    if(curr==NULL)
                        break;
                }
                prev->next = curr;
                prev = curr;
            }
            else{
                curr = curr->next;
                prev = prev->next;
            }
        }
        return head;
    }
};