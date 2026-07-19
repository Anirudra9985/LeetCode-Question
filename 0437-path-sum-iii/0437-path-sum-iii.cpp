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

    // int dfs(TreeNode* root, long long targetSum) {
    //     if (!root) return 0;

    //     int cnt = 0;

    //     if (root->val == targetSum) cnt++;

    //     cnt += dfs(root->left, targetSum - root->val);
    //     cnt += dfs(root->right, targetSum - root->val);

    //     return cnt;
    // }

    int dfs (TreeNode*root,long long targetSum){
        if(!root){return 0;}
        int cnt =0;
        if(root->val==targetSum) cnt++;
        cnt+=dfs(root->left,targetSum-root->val);
        cnt+=dfs(root->right,targetSum-root->val);
        return cnt ;

    }
    int pathSum(TreeNode* root, int targetSum) {
        // if (!root) return 0;

        // return dfs(root, targetSum)
        //      + pathSum(root->left, targetSum)
        //      + pathSum(root->right, targetSum);
        if(root==NULL){
            return 0;
        }
         return dfs(root,targetSum)+pathSum(root->left,targetSum)+pathSum(root->right,targetSum);

    }

};

//  vector<vector<int>>ans;
//     void dfs(TreeNode*root,vector<int>&path,int targetSum){
//         if(!root) return ;
//         path.push_back(root->val);
//         targetSum =targetSum- root->val;
//         if(!root->left && !root->right && targetSum==0){
//             ans.push_back(path);
//         }
//         dfs(root->left,path,targetSum);
//         dfs(root->right,path,targetSum);

//         path.pop_back();
//     }
//     vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
//         vector<int>path;
//         dfs(root,path,targetSum);
//         return ans;