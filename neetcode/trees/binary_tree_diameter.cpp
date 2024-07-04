#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        dfs(root, diameter);
        return diameter;
    }
private:
    int dfs(TreeNode* root, int& diameter) {
        if (!root) {
            return 0;
        }

        int left = dfs(root->left, diameter);
        int right = dfs(root->right, diameter);
        diameter = max(diameter, left + right);
        return 1 + max(left, right);
    }
};
