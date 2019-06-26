//Path_synthesis��·���ܺ�
//https ://leetcode-cn.com/problems/path-sum/
//����һ����������һ��Ŀ��ͣ��жϸ������Ƿ���ڸ��ڵ㵽Ҷ�ӽڵ��·��������·�������нڵ�ֵ��ӵ���Ŀ��͡�
//˵�� : Ҷ�ӽڵ���ָû���ӽڵ�Ľڵ㡣
//ʾ�� :
//�������¶��������Լ�Ŀ��� sum = 22��
//5
/// \
//4   8
/// / \
//11  13  4
/// \      \
//7    2      1
//���� true, ��Ϊ����Ŀ���Ϊ 22 �ĸ��ڵ㵽Ҷ�ӽڵ��·�� 5->4->11->2��

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
	bool hasPathSum(TreeNode* root, int sum) {
		if (!root)
			return false;

		sum = sum - root->val;
		//����Ҷ�ӽ���ʱ��
		if (root->left == NULL && root->right == NULL && sum == 0)
			return true;
		//������Ҷ�ӽ���ʱ���ȱ����������ж��Ƿ����·������������������ж��Ƿ����·��
		else if ((root->left) != NULL || (root->right) != NULL)
			return hasPathSum(root->left, sum) ? true : hasPathSum(root->right, sum);

		return false;
	}
};