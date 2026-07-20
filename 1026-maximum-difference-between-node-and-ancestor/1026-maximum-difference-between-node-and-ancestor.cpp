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
//    int ans =0;
//     void dfs(TreeNode*root,int mini,int maxi){
//         if(!root) return;
//      ans = max(abs(ans, max(abs(root->val-mini),
//      abs(root->val-maxi)));
//      mini = min(mini,root->val);
//      maxi = max(maxi,root->val);
//      dfs(root->left,mini,maxi);
//      dfs(root->right,mini,maxi);
    
//     }

 int ans =0;
    int dfs(TreeNode*root,int mini,int maxi){
        if(!root) return (maxi-mini);
  
     mini = min(mini,root->val);
     maxi = max(maxi,root->val);
     int left=dfs(root->left,mini,maxi);
     int right =dfs(root->right,mini,maxi);
     return max( left,right);
    }

     int maxAncestorDiff(TreeNode* root) {
        // if(root == NULL){
        //     return NULL;
        // }
        // dfs(root,root->val,root->val);
        // return ans;
    
         return  dfs(root,root->val,root->val);

     }
};      