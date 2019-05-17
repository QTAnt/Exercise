//Merging_two_ordered_linked_lists���ϲ�������������
//https://leetcode-cn.com/problems/merge-two-sorted-lists/
//��������������ϲ�Ϊһ���µ������������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�
//ʾ����
//���룺1->2->4, 1->3->4
//�����1->1->2->3->4->4

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
		if (l1 == NULL) return l2;//����һ��Ϊ��������ֱ�ӷ�����һ��
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