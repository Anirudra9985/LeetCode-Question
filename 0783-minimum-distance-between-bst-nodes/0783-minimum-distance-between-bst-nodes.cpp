class Solution {
public:
    int minDiffInBST(TreeNode* root) {
        vector<int> values;
        collect(root, values);
        sort(values.begin(), values.end());

        int minDiff = INT_MAX;
        for (int i = 1; i < values.size(); i++) {
            minDiff = min(minDiff, values[i] - values[i - 1]);
        }
        return minDiff;
    }

private:
    void collect(TreeNode* node, vector<int>& values) {
        if (!node) return;
        values.push_back(node->val);
        collect(node->left, values);
        collect(node->right, values);
    }
};