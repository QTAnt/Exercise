二叉树的后序遍历
 https://leetcode-cn.com/problems/binary-tree-postorder-traversal/

给定一个二叉树，返回它的 后序?遍历。

示例:

输入: [1,null,2,3]
  
   1

    \

     2

    /

   3 

输出: [3,2,1]

class Solution {

public:

    TreeNode* getLeftMostRight(TreeNode* root) {

        auto node = root->left;

        while (node != NULL && node->right != NULL && node->right != root) {

            node = node->right;

        }

        return node;

    }

    TreeNode* reverseRight(TreeNode* root) {

        auto prev = root;

        auto curr = prev->right;

        prev->right = NULL;

        while (curr != NULL) {

            auto temp = curr->right;

            curr->right = prev;

            prev = curr;

            curr = temp;

        }

        return prev;

    }

    
    void printEdge(TreeNode* root, vector<int>& res) {

        if (root == NULL) return;

        auto tail = reverseRight(root);

        auto node = tail;

        while (node != NULL) {

            res.push_back(node->val);

            node = node->right;

        }

        reverseRight(tail);

    }

    vector<int> postorderTraversal(TreeNode* root) {

        auto head = root;

        vector<int> res;

        while (root) {

            if (root->left == NULL) {

                root = root->right;

            } else {

                auto node = getLeftMostRight(root);

                if (node->right == root) {

                    node->right = NULL;

                    printEdge(root->left, res);

                    root = root->right;

                } else {

                    node->right = root;

                    root = root->left;

                }

            }

        }

        printEdge(head, res);

        return res;

    }

};