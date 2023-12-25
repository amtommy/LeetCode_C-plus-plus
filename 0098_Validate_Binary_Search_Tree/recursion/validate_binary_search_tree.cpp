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
// T: O(N) as every node is visited once.
private:
    bool checkBST(TreeNode* root, long long lowerBound, long long upperBound) {
        if(root == NULL) return true;
        if(root->val <= lowerBound || root->val >= upperBound) return false;
        return checkBST(root->left, lowerBound, root->val) &&
               checkBST(root->right, root->val, upperBound);
    }
public:
    bool isValidBST(TreeNode* root) {
        if(root == NULL) return true;
        return checkBST(root->left, LLONG_MIN, root->val) &&
               checkBST(root->right, root->val, LLONG_MAX);
    }
};