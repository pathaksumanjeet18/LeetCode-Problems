/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int solve(TreeNode* curr,int max){
        if(!curr){
            return 0;
        }
        int count = 0;
        if(curr->val>= max){
            count += 1;
            max = curr->val;
        }
        count += solve(curr->left,max);
        count += solve(curr->right,max);
        return count;
    }
public:
    int goodNodes(TreeNode* root) {
        if(root ==NULL){
            return 0;
        }
        int count = 1;
        count += solve(root->left,root->val);
        count += solve(root->right,root->val);
        return count;
    }
};