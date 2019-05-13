//Delete_the_nth_node_of_the_linked_list��ɾ������ĵ����� n ���ڵ�
//https://leetcode-cn.com/problems/remove-nth-node-from-end-of-list/
//����һ������ɾ������ĵ����� n ���ڵ㣬���ҷ��������ͷ��㡣
//ʾ����
//����һ������ : 1->2->3->4->5, �� n = 2.
//		 ��ɾ���˵����ڶ����ڵ�������Ϊ 1->2->3->5.
//		 ˵����
//		 ������ n ��֤����Ч�ġ�
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