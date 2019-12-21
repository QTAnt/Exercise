二叉树的层序遍历
https://leetcode-cn.com/problems/binary-tree-level-order-traversal/
给定一个二叉树，返回其按层次遍历的节点值。
 （即逐层地，从左到右访问所有节点）。

例如:

给定二叉树:
[3,9,20,null,null,15,7],

    3

   / \

  9  20

    /  \

   15   7

返回其层次遍历结果：

[
 [3],

  [9,20],

  [15,7]

]

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
    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>> res;
        if(!root){
		    return res;
	    }
        queue<TreeNode*> Q;
        TreeNode* p;
        Q.push(root);
        while(Q.empty()==0){
            vector<int> a;
            int width=Q.size();
            for(int i=0;i<width;i++){
                p=Q.front();
                a.push_back(p->val);
                Q.pop();
                if(p->left) Q.push(p->left);
                if(p->right) Q.push(p->right);
            }
            res.push_back(a);
        }
    return res;
    }
};