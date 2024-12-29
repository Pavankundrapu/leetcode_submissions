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
    int ans = INT_MIN;
    int maxi(TreeNode* root)
    {
      if(!root) return 0;
      int leftmax = max(0,maxi(root->left));
      int rightmax = max(0,maxi(root->right));
      ans = max(ans,root->val+leftmax+rightmax);
      return root->val+max(leftmax,rightmax);
    }
    int maxPathSum(TreeNode* root) {
        maxi(root);
        return ans;
    }
};