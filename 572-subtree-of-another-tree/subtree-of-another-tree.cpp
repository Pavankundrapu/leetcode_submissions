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
    bool identical(TreeNode* p,TreeNode* child)
    {
        if(!p && !child) return true;
        if(!p || !child) return false;

        return ((p->val == child->val) && 
        identical(p->left,child->left) && 
        identical(p->right,child->right));
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return true;
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int qlen = q.size();
            TreeNode* temp;
            while(qlen>0)
            {
                temp = q.front();
                q.pop();
                if(temp->val == subRoot->val)
                {
                    if(identical(temp,subRoot))
                    return true;
                }
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                qlen--;
            }
        }
        return false;
      
    }
};