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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> ans;
        if(root==NULL)
            return ans;

        TreeNode* d = root;
        while(true){
            if(d != NULL){
                s.push(d);
                d = d->left;

            }
            else{
                if(s.empty() == true) break;
                d = s.top();
                s.pop();
                ans.push_back(d->val);
                d = d->right;
            }
        }
        return ans;
    }
};







