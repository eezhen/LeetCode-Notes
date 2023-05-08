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
    void dfs(TreeNode* R, TreeNode*& T){
        if(R==nullptr){
            return;
        }
        dfs(R->left,T);
        T->right = new TreeNode(0);
        T = T->right;
        T->val = R->val;
        dfs(R->right,T);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* temp = new TreeNode(0);
        TreeNode* T = temp;
        dfs(root,T);
        return temp->right;
    }
};
