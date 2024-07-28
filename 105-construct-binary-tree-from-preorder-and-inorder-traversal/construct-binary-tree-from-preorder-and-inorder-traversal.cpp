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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTreeHelper(preorder, inorder, 0, preorder.size() - 1, 0, inorder.size() - 1);
    }

private:
    TreeNode* buildTreeHelper(vector<int>& preorder, vector<int>& inorder, int preStart, int preEnd, int inStart, int inEnd) {
        if (preStart > preEnd || inStart > inEnd) {
            return nullptr;
        }
        int rootValue = preorder[preStart];
        TreeNode* root = new TreeNode(rootValue);
        
        int rootIndexInOrder = inStart;
        while (inorder[rootIndexInOrder] != rootValue) {
            rootIndexInOrder++;
        }
        
        int leftSubtreeSize = rootIndexInOrder - inStart;
        
        root->left = buildTreeHelper(preorder, inorder, preStart + 1, preStart + leftSubtreeSize, inStart, rootIndexInOrder - 1);
        root->right = buildTreeHelper(preorder, inorder, preStart + leftSubtreeSize + 1, preEnd, rootIndexInOrder + 1, inEnd);
        
        return root;
    }
};