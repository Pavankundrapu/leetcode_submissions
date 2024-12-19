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
    int maxDepth(TreeNode* root) {
        int level = 0;
        if(!root) return 0;
        
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* temp;
        while(!q.empty())
        {
            int qlen = q.size();
            while(qlen>0)
            {
                temp = q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                qlen--;
            }
            level++;
        }
        return level;
    }
};