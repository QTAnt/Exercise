//Nodes_in_a_pair_of_exchange_lists：两两交换链表中的节点
//https://leetcode-cn.com/problems/swap-nodes-in-pairs/
//给定一个链表，两两交换其中相邻的节点，并返回交换后的链表。你不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。 示例:给定 1->2->3->4, 你应该返回 2->1->4->3.
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
	ListNode* swapPairs(ListNode* head) {
		if (head == NULL || head->next == NULL) return head;
		ListNode*pre = new ListNode(-1);
		ListNode*pt = pre;
		ListNode*pcur = head;
		pt->next = pcur;
		ListNode* temp = NULL;
		ListNode* pnext = NULL;
		while (pcur&&pcur->next)
		{
			pnext = pcur->next;
			pt->next = pnext;
			temp = pnext->next;
			pnext->next = pcur;
			pcur->next = temp;
			pt = pcur;
			pcur = temp;
		}
		return pre->next;
	}
};