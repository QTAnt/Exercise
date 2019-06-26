//Path_synthesis：路径总和
//https ://leetcode-cn.com/problems/path-sum/
//给定一个二叉树和一个目标和，判断该树中是否存在根节点到叶子节点的路径，这条路径上所有节点值相加等于目标和。
//说明 : 叶子节点是指没有子节点的节点。
//示例 :
//给定如下二叉树，以及目标和 sum = 22，
//5
/// \
//4   8
/// / \
//11  13  4
/// \      \
//7    2      1
//返回 true, 因为存在目标和为 22 的根节点到叶子节点的路径 5->4->11->2。

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
		//当是叶子结点的时候
		if (root->left == NULL && root->right == NULL && sum == 0)
			return true;
		//当不是叶子结点的时候，先遍历左子树判断是否存在路径，否则遍历右子树判断是否存在路径
		else if ((root->left) != NULL || (root->right) != NULL)
			return hasPathSum(root->left, sum) ? true : hasPathSum(root->right, sum);

		return false;
	}
};