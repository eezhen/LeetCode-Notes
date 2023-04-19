/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sum = 0;
int depth = 0;

void PrevOrder(struct TreeNode* p, int lv) {
    if (p == NULL) {
	    return;
    }
    else if(lv > depth){
        sum = (p->val);
        depth = lv;
    }
    else if(lv == depth){
        sum += (p->val);
    }
    PrevOrder(p->left, lv+1);
    PrevOrder(p->right, lv+1);
}

int deepestLeavesSum(struct TreeNode* root){
    PrevOrder(root,1);
    depth = 0;
    return sum;
}
