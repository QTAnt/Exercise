//Merging_two_ordered_linked_lists：合并两个有序链表
//https://leetcode-cn.com/problems/merge-two-sorted-lists/
//将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
//示例：
//输入：1->2->4, 1->3->4
//输出：1->1->2->3->4->4

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
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (l1 == NULL) return l2;//其中一个为空链表，就直接返回另一个
		if (l2 == NULL) return l1;
		ListNode* p = l1;
		ListNode* q = l2;
		ListNode* start = l1->val<l2->val ? l1 : l2;
		do{
			if (q->val <= p->val){
				while (q->next != NULL&&q->next->val <= p->val)
					q = q->next;
				l2 = q->next;
				q->next = p;
			}
			else
			{
				while (p->next != NULL&&p->next->val<q->val)
					p = p->next;
				l2 = q->next;
				q->next = p->next;
				p->next = q;
			}
			q = l2;
		} while (q != NULL);
		return start;
	}
};