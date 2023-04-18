/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void PrevOrder(struct TreeNode* p, int* sum, int low, int high) {
    if (p == NULL) {
	return;
    }
    if(p->val >= low && p->val <= high){
	(*sum) += p->val;
    }
    PrevOrder(p->left,sum,low,high);
    PrevOrder(p->right,sum,low,high);
}

int rangeSumBST(struct TreeNode* root, int low, int high){
    int sum = 0;
    PrevOrder(root,&sum,low,high);
    return sum;
}
