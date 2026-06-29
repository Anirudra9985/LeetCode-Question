class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        dfs(root, 0, result);
        return result;
    }

private:
    void dfs(TreeNode* node, int depth, vector<int>& result) {
        if (node == nullptr) return;

        // First node at this depth is the rightmost (since we go right first)
        if (depth == result.size()) {
            result.push_back(node->val);
        }

        dfs(node->right, depth + 1, result);  // Visit right subtree first
        dfs(node->left, depth + 1, result);
    }
};