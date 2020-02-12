226��ת������
https://leetcode-cn.com/problems/invert-binary-tree/
��תһ�ö�������


ʾ����


���룺


     4

   /   \
  
2     7
 
/ \   / \

1   3 6   9

�����


     4

   /   \
 
 7     2

 / \   / \

9   6 3   1



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
    //1) �Ƚ����ڶ�������ҽڵ㡪��ʵ�ֵڶ����Լ�����ȫ���������Ľ���
    //2) �ֱ�ڶ������µ���������������о���
    void invertTreeCore(TreeNode* root){
        if(!root) return;
    	if(!root->left && !root->right) {
    		return;
    	}
    	TreeNode* tmp_node = root->left;
    	root->left = root->right;
    	root->right = tmp_node;
    	invertTreeCore(root->left);
    	invertTreeCore(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {        
//    	invertTreeCore(root, root->left, root->right);
    	invertTreeCore(root);
    	return root;
    }
};