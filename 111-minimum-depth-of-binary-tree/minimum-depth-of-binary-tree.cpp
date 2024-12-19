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
    int minDepth(TreeNode* root) {
        int level = 0;
        if(!root) return level;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* temp;

        while(!q.empty())
        {
            int  qlen = q.size();
            while(qlen>0)
            {
                temp = q.front();
                q.pop();
                if(!(temp->left) && !(temp->right))
                {
                    return level += 1;
                }
                else
                {
                    if(temp->left) q.push(temp->left);
                    if(temp->right) q.push(temp->right);
                }
                qlen--;
            }
            level++;
        }
        return level;
    }
};