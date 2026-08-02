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
    int globalmax = INT_MIN;
    int path(TreeNode*root){
        if(root==NULL) return NULL;
        int left=max(0,path(root->left));
        int right =max(0,path(root->right));

        int pathsum = root->val+left+right;

        globalmax= max(globalmax,pathsum);

        return root->val +max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        path(root);
        return globalmax;
    }
};