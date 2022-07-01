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
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)
            return ans;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode* d = s.top();
            ans.push_back(d->val);
            
            s.pop();
            if(d->right!=NULL)
                s.push(d->right);
            if(d->left!=NULL)
                s.push(d->left);
        }
        return ans;
    }
};