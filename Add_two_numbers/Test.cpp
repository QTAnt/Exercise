//https://leetcode-cn.com/problems/add-two-numbers/
//�������
//�������� �ǿ� ������������ʾ�����Ǹ������������У����Ǹ��Ե�λ���ǰ��� ���� �ķ�ʽ�洢�ģ��������ǵ�ÿ���ڵ�ֻ�ܴ洢 һλ ���֡�
//��������ǽ��������������������᷵��һ���µ���������ʾ���ǵĺ͡�
//�����Լ���������� 0 ֮�⣬���������������� 0 ��ͷ��
//ʾ����
//���룺(2 -> 4 -> 3) + (5 -> 6 -> 4)
//�����7 -> 0 -> 8
//ԭ��342 + 465 = 807
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