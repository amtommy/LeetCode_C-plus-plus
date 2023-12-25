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
    // T: O(N)
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL) return result;

        queue<TreeNode*> nodeQuene;
        nodeQuene.push(root);

        while(!nodeQuene.empty()){
            int levelSize = nodeQuene.size();
            vector<int> currLevel;

            for(int i = 0; i < levelSize; i++){
                TreeNode* currNode = nodeQuene.front();
                nodeQuene.pop();

                currLevel.push_back(currNode->val);

                if(currNode->left != NULL) nodeQuene.push(currNode->left);
                if(currNode->right != NULL) nodeQuene.push(currNode->right);
            }
            result.push_back(currLevel);
        }
        return result;
    }
};