[���������������](%3Ca href="https://leetcode-cn.com/problems/binary-tree-inorder-traversal/"%3Ehttps://leetcode-cn.com/problems/binary-tree-inorder-traversal/%3C/a%3E)
����һ����������������������?������

ʾ��:

����: [1,null,2,3]

   1

    \

     2

    /

   3


���: [1,3,2]

class Solution {

public:

    TreeNode* getLeftMostRight(TreeNode* root) {

        auto node = root->left;

        while (node != NULL && node->right != NULL && node->right != root) {

            node = node->right;

        }

        return node;

    }

    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> res;

        while (root) {

            if (root->left == NULL) {

                res.push_back(root->val);

                root = root->right;

            } else {

                auto node = getLeftMostRight(root);

                if (node->right == root) {

                    node->right = NULL;

                    res.push_back(root->val);

                    root = root->right;

                } else {

                    node->right = root;

                    root = root->left;

                }

            }

        }

        return res;

    }

};

