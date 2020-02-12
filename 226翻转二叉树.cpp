226翻转二叉树
https://leetcode-cn.com/problems/invert-binary-tree/
翻转一棵二叉树。


示例：


输入：


     4

   /   \
  
2     7
 
/ \   / \

1   3 6   9

输出：


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
    //1) 先交换第二层的左右节点——实现第二层以及以下全部曾整个的交换
    //2) 分别第二层往下的左右子树自身进行镜像
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