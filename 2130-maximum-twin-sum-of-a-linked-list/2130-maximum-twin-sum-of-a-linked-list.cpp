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
    int pairSum(ListNode* head) {
        if(head==NULL)
            return 0;
        stack<int> t1;
        ListNode* temp = head;
        while(temp!=NULL){
            t1.push(temp->val);
            temp = temp ->next;
        }
        int n = t1.size();int maxi = INT_MIN;temp = head;
        while(n--){
            maxi = max(maxi,t1.top() + temp->val);
            t1.pop();
            temp = temp -> next;
        }
        return maxi;
    }
};