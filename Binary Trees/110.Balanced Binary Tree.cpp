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
      bool res=true;
      int heightoftree(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lh=heightoftree(root->left);
        int rh=heightoftree(root->right);
        if(abs(rh-lh)>=2){
            res=false;
        }
        return 1+max(lh,rh);
      }
    bool isBalanced(TreeNode* root) {
      if(root==NULL){
        return true;
      }
      
      heightoftree(root);
      return res;
    }
};
