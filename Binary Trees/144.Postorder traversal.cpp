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
    void postorder(TreeNode* root,vector<int>& temp){
          if(root==NULL){
            return;
          }
        postorder(root->left,temp);
        postorder(root->right,temp);
        temp.push_back(root->val);
     }
    vector<int> postorderTraversal(TreeNode* root) {
    vector<int> temp;
     postorder(root,temp);
     return temp;
    }
};
