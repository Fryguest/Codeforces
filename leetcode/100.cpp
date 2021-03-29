/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p==NULL and q==NULL) return true;
        if ((p==NULL and q!=NULL) or (p!=NULL and q==NULL)) return false;
        if (p->val != q->val) return false;

        if (!isSameTree(p->left, q->left)) return false;
        if (!isSameTree(p->right, q->right)) return false;
        return true;
    }
};
