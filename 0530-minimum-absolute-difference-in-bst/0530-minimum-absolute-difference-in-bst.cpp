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

 
    int getMinimumDifference(TreeNode* root) {
        vector<int>values;
        collect(root,values);
        sort(values.begin(),values.end());
         int miniabs = INT_MAX;
         for(int i=1;i<values.size();i++){
            miniabs = min(miniabs,abs(values[i]-values[i-1]));

         }

       return miniabs;
    }
    private:
        void collect(TreeNode*root,vector<int>&values){
        if(!root) return ;
        values.push_back(root->val);
        collect(root->left,values);
        collect(root->right,values);

     }
};