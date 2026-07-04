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
    int widthOfBinaryTree(TreeNode* root) {
        // queue<pair<TreeNode*, long long>> q;
        // q.push({root, 0});
        // long long maxWidth = 0;

        // while (!q.empty()) {
        //     int levelSize = q.size();
        //     long long leftmost = q.front().second;
        //     long long rightmost = leftmost;

        //     for (int i = 0; i < levelSize; i++) {
        //         auto [node, idx] = q.front();
        //         q.pop();
        //         rightmost = idx;

        //         // Normalize index to prevent overflow
        //         long long normalizedIdx = idx - leftmost;

        //         if (node->left) {
        //             q.push({node->left, 2 * normalizedIdx});
        //         }
        //         if (node->right) {
        //             q.push({node->right, 2 * normalizedIdx + 1});
        //         }
        //     }

        //     maxWidth = max(maxWidth, rightmost - leftmost + 1);
        // }

        // return (int)maxWidth;

    
        int maxWidth = 0;
        vector<long long> leftmostIndices;
        dfs(root, 0, 0, leftmostIndices, maxWidth);
        return maxWidth;
        
    }

private:
    void dfs(TreeNode* node, int depth, long long index,
             vector<long long>& leftmostIndices, int& maxWidth) {
        if (!node) return;

        // First node at this depth is the leftmost
        if (depth == (int)leftmostIndices.size()) {
            leftmostIndices.push_back(index);
        }

        long long width = index - leftmostIndices[depth] + 1;
        maxWidth = max(maxWidth, (int)width);

        // Normalize to prevent index overflow
        long long normalizedIndex = index - leftmostIndices[depth];
        dfs(node->left, depth + 1, 2 * normalizedIndex, leftmostIndices, maxWidth);
        dfs(node->right, depth + 1, 2 * normalizedIndex + 1, leftmostIndices, maxWidth);
    }
};
    

