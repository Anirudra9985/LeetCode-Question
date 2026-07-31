/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
right(right) {}
 * };
//  */
// class Solution {
//     int res=0;
// public:
//     int diameterOfBinaryTree(TreeNode* root) {
//        dfs(root);

//        return res;

//     }

// private:
//   int dfs(TreeNode*root){
//     if(!root) return 0;

//     int l = dfs(root->left);
//     int r = dfs(root->right);

//     res = std::max(res,l+r);
//     return 1+std::max(l,r);
//   }
//   };
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root, int& maxi) {
       if(root==NULL) return 0;

       int lh =diameterOfBinaryTree(root->left,maxi);
       int rh = diameterOfBinaryTree(root->right,maxi);

       maxi = max(maxi,lh+rh);
       return 1+max(lh,rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        diameterOfBinaryTree(root, maxi);
        return maxi;
    }
};