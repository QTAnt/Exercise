�����������������������
https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
����һ������������, �ҵ�����������ָ���ڵ������������ȡ�


�ٶȰٿ�������������ȵĶ���Ϊ���������и��� T ���������
p��q������������ȱ�ʾΪһ����� x������ x �� p��q ������
�� x ����Ⱦ����ܴ�һ���ڵ�Ҳ���������Լ������ȣ�����


���磬�������¶���������:
? root =?[6,2,8,0,4,7,9,null,null,3,5]

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root->val>p->val&&root->val<q->val) return root;
        if(root->val>p->val&&root->val>q->val) return lowestCommonAncestor(root->left,p,q);
        if(root->val<p->val&&root->val<q->val) return lowestCommonAncestor(root->right,p,q);
        return root;
    }
};