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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL or head->next==NULL)
            return head;
        int length = 1;
        ListNode* leni = head;
        while(leni->next != NULL){
            leni=leni->next;
            length++;
        }
        k = (k%length);
        while(k>0){
            ListNode* tempi = head;
            ListNode* tempa = head->next;
            while(tempa->next != NULL){
                tempa = tempa->next;
                tempi = tempi->next;
            }
            tempa->next = head;
            head = tempa;
            tempi->next = NULL;
            k--;
        }
        return head;
    }
};