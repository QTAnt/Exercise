[144.二叉树的前序遍历](% 3Ca href = "https://leetcode-cn.com/problems/binary-tree-preorder-traversal/"%3Ehttps://leetcode-cn.com/problems/binary-tree-preorder-traversal/%3C/a%3E)

给定一个二叉树，返回它的?前序?遍历。

示例 :
输入 : [1, null, 2, 3]

	1

	\

	2

	/

	3


输出:[1, 2, 3]

进阶 : 递归算法很简单，你可以通过迭代算法完成吗？


/**
*?Definition?for?a?binary?tree?node.

*?struct?TreeNode?{

*?????int?val;

*?????TreeNode?*left;

*?????TreeNode?*right;

*?????TreeNode(int?x)?:?val(x),?left(NULL),?right(NULL)?{}

*?};

*/
class?Solution?{
public:

	TreeNode*?getLeftMostRight(TreeNode*?root)?{

		auto?node? = root->left;

		while?(node? != NULL?&&?node->right? != NULL?&&?node->right? != root)?{

			node? = node->right;

		}

		return?node;

	}

	vector<int>?preorderTraversal(TreeNode*?root)?{

		vector<int>?res;

		while?(root)?{

			if?(root->left? == NULL)?{

				res.push_back(root->val);

				root? = root->right;

			}?else?{

				auto?node? = getLeftMostRight(root);

				if?(node->right? == root)?{

					node->right? = NULL;

					root? = root->right;

				}?else?{

					res.push_back(root->val);

					node->right? = root;

					root? = root->left;

				}

			}

		}

		return?res;

	}

};