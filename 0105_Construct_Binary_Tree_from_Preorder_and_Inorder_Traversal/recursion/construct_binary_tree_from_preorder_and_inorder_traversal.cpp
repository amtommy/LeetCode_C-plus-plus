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
    // T: O(n^2)
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty() || inorder.empty()) return NULL;

        TreeNode* root = new TreeNode(preorder[0]);

        vector<int>::iterator it = std::find(inorder.begin(), inorder.end(), preorder[0]);
        int mid = std::distance(inorder.begin(), it);

        vector<int> preorder_left(preorder.begin() + 1, preorder.begin() + mid + 1);
        vector<int> preorder_right(preorder.begin() + mid + 1, preorder.end());
        vector<int> inorder_left(inorder.begin(), inorder.begin() + mid);
        vector<int> inorder_right(inorder.begin() + mid + 1, inorder.end());
        root->left = buildTree(preorder_left, inorder_left);
        root->right = buildTree(preorder_right, inorder_right);
        return root;
    }
};