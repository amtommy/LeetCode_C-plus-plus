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
    TreeNode* invertTree(TreeNode* root) { // S:O(N)
        if(root == NULL) return root;
        TreeNode* tmp = root->right;
        root->right = root->left;
        root->left = tmp;
        invertTree(root->right); // T:O(N)
        invertTree(root->left); // T:O(N)
        return root;
    }
};