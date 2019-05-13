//Delete_the_nth_node_of_the_linked_list：删除链表的倒数第 n 个节点
//https://leetcode-cn.com/problems/remove-nth-node-from-end-of-list/
//给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。
//示例：
//给定一个链表 : 1->2->3->4->5, 和 n = 2.
//		 当删除了倒数第二个节点后，链表变为 1->2->3->5.
//		 说明：
//		 给定的 n 保证是有效的。
///**
//* Definition for singly-linked list.
//* struct ListNode {
//*     int val;
//*     ListNode *next;
//*     ListNode(int x) : val(x), next(NULL) {}
//* };
//*/
class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		int index = 0;
		ListNode* fast = head;
		ListNode* slow = head;
		while (index < n && fast){
			fast = fast->next;
			index++;
		}
		if (fast == NULL) return head->next;
		else{
			fast = fast->next;
			while (fast){
				fast = fast->next;
				slow = slow->next;
			}
			slow->next = slow->next->next;
		}
		return head;
	}
};