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
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>> ans;
       if(!root) return ans;
       queue<TreeNode*> q;
       q.push(root);
       TreeNode* current;

       while(!q.empty()) 
       {
          int qlength = q.size();
          vector<int> level;
          while(qlength>0)
          {
             current = q.front();
             q.pop();
             level.push_back(current->val);
             if(current->left) q.push(current->left);
             if(current->right) q.push(current->right);
             qlength--;
          }
          ans.push_back(level);
       }
       return ans;
        
    }
};