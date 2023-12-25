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
// T:O(N)
private:
    void inOrderTraversal(TreeNode* root, vector<int>& list){
        if(root == NULL) return;
        inOrderTraversal(root->left, list);
        list.push_back(root->val);
        inOrderTraversal(root->right, list);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> list;
        inOrderTraversal(root, list);
        return list[k-1];
    }
};