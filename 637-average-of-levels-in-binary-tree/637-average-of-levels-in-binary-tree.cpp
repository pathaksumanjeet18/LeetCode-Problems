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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ansi;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            double sum = 0;
            for(int i = 1;i<=size;i++){
                TreeNode* d = q.front();
                q.pop();
                sum += d->val;
                if(d->left){
                    q.push(d->left);
                }
                if(d->right){
                    q.push(d->right);
                }
            }
            ansi.push_back((double)(sum)/size);
        }
        return ansi;
    }
};