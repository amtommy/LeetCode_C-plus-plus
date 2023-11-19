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
    bool isSametree(TreeNode* root, TreeNode* subRoot) // T:O(N), S:O(N)
    {
        if(subRoot == NULL && root == NULL) return true;
        else if(subRoot == NULL || root == NULL) return false;
        if(subRoot->val != root->val) return false;
        return isSametree(root->left, subRoot->left) && isSametree(root->right, subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) { //T:O(N^2), S:O(N)
        if(root == NULL) return false;
        if(isSametree(root, subRoot)) return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};