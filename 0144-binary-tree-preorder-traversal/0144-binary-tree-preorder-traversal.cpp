class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
       
      vector<int>ans;
      preorder(root,ans);
      return ans;
    }

    private:
       void preorder(TreeNode*root ,vector<int>&ans){
        if(root==NULL){
            return ;
        }
        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);
       }
      
// private:
//     void preorder(TreeNode* node, vector<int>& res) {
//         if (node == nullptr) {
//             return;
//         }

//         res.push_back(node->val);
//         preorder(node->left, res);
//         preorder(node->right, res);
      
};