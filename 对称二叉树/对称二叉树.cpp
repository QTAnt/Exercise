�Գƶ�����
https://leetcode-cn.com/problems/symmetric-tree/
����һ����������������Ƿ��Ǿ���ԳƵġ�


���磬������?[1,2,2,3,4,4,3] �ǶԳƵ�
��

  
    1

   / \

  2   2

 / \ / \

3  4 4  3

�����������?
[1,2,2,null,3,null,3] 
���Ǿ���ԳƵ�:


    1

   / \

  2   2

   \   \

   3    3

˵��:

�����������õݹ�͵������ַ������������⣬��ܼӷ֡�



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
    bool isSymmetric(TreeNode* root) {
        return ismirror(root,root);
    }
    bool ismirror(TreeNode* t1,TreeNode* t2)
    {
        if(t1==NULL&&t2==NULL)//��Ϊ��
            return true;
        if(t1==NULL||t2==NULL)//��һ��Ϊ��
            return false;
        return (t1->val==t2->val)&&ismirror(t1->left,t2->right)&&ismirror(t1->right,t2->left);
    }
};
