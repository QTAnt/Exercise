//Sequence_traversal_of_binary_trees_II���������Ĳ������II
//https://leetcode-cn.com/problems/binary-tree-level-order-traversal-ii/
//����һ����������������ڵ�ֵ�Ե����ϵĲ�α����� ��������Ҷ�ӽڵ����ڲ㵽���ڵ����ڵĲ㣬���������ұ�����
//���磺
//����������[3, 9, 20, null, null, 15, 7],
//3
/// \
//9  20
/// \
//15   7
//�������Ե����ϵĲ�α���Ϊ��
//[
//	[15, 7],
//	[9, 20],
//	[3]
//]
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
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		vector<vector<int> > result;
		if (!root)
			return result;
		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty())
		{
			vector<int> temp;
			int size = q.size();
			for (int i = 0; i<size; ++i)
			{
				TreeNode* cur = q.front();
				temp.push_back(cur->val);
				if (cur->left)
					q.push(cur->left);
				if (cur->right)
					q.push(cur->right);
				q.pop();
			}
			result.push_back(temp);
		}
		reverse(result.begin(), result.end());
		return result;
	}
};
