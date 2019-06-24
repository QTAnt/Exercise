//Sequence_traversal_of_binary_trees_II：二叉树的层序遍历II
//https://leetcode-cn.com/problems/binary-tree-level-order-traversal-ii/
//给定一个二叉树，返回其节点值自底向上的层次遍历。 （即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历）
//例如：
//给定二叉树[3, 9, 20, null, null, 15, 7],
//3
/// \
//9  20
/// \
//15   7
//返回其自底向上的层次遍历为：
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
