//https://leetcode-cn.com/problems/add-two-numbers/
//两数相加
//给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
//如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
//您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
//示例：
//输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
//输出：7 -> 0 -> 8
//原因：342 + 465 = 807
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *head;
		int c = 0;
		ListNode *pre, *cur;

		int temp = l1->val + l2->val + c;
		c = temp > 9 ? 1 : 0;
		cur = new ListNode(temp % 10);

		pre = cur;
		l1 = l1->next;
		l2 = l2->next;

		head = cur;


		while (l1 && l2)
		{
			int temp = l1->val + l2->val + c;
			c = temp > 9 ? 1 : 0;
			cur = new ListNode(temp % 10);
			if (pre)
				pre->next = cur;
			pre = cur;
			l1 = l1->next;
			l2 = l2->next;
		}

		if (l1 || l2)
		{
			ListNode *rest = l1 ? l1 : l2;
			while (rest)
			{
				int temp = rest->val + c;
				c = temp > 9 ? 1 : 0;
				cur = new ListNode(temp % 10);
				if (pre)
					pre->next = cur;
				pre = cur;
				rest = rest->next;
			}
		}
		if (c == 1)
			cur->next = new ListNode(1);
		return head;
	}
};