//203:�Ƴ�����Ԫ��
//https://leetcode-cn.com/problems/remove-linked-list-elements/description/
////<����>
//˼·������ɾ��������Ԫ���Ǻܼ򵥵ģ�ֻ��Ҫ�ô�ɾ�ڵ�֮ǰһ���ڵ�ָ���ɾ�ڵ�֮��һ���ڵ㼴�ɡ� 
��������������ǣ���ĿҪ������Ҫ�����������е�ͷ��㣬������ǾͲ��ý�������ͷ���ķ�ʽ(��H = head)
Ȼ����H���в�������󷵻�head�������ͻᵼ�����ͷ���Ҳ��������Ҫɾ���Ľڵ�ͻᵼ�´���
��Ȼ���ǿ��Բ���ѭ�������жϵ�һ����������Ҫɾ���Ľڵ㣬����������Щ�鷳����õķ�ʽ����
���Ǵ���һ���½ڵ�����Ϊ���������ͷ��㣬�ýڵ��е�ֵû�����壬ֻ���øýڵ����������ǵĲ�����
�����H->next = head; ��ʱ ���ǲ���H�Ļ��Ͱ�ԭ�ȵ�ͷ��㵱����һ����ͨ�ڵ�����������ʱԭ�ȵ�ͷ
���Ϳ��Ա�ɾ���ˡ���󷵻�H->next�����������ˡ����������и�������ڵ���Ϊͷ����ͳһ
��������ͷ��㵱����ͨ�ڵ㣩����ʵ��������ƹ����ж����и�������ͷ���ģ�
����ͷ��㲻�ý�������⣬��ҿ�����һ���ڵ����ԡ�

class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		if (head == NULL) return NULL;
		ListNode*H = new ListNode(-1);
		H->next = head;
		ListNode*p = H;
		ListNode*s = NULL;
		while (p->next != NULL)
		{
			if (p->next->val == val)
			{
				s = p->next;
				p->next = p->next->next;
				delete s;
			}
			else
				p = p->next;
		}
		return H->next;
	}
};

//<����>
class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		if (head == NULL) return NULL;

		ListNode *pre = head, *cur = head->next;
		while (cur)
		{
			cur->val == val ? pre->next = cur->next : pre = pre->next;
			cur = cur->next;
		}
		return head->val == val ? head->next : head;
	}
};

//<����>
struct ListNode* removeElements(struct ListNode* head, int val) {
	//��ͷ�ڵ�Ϊ�գ�����һ����ָ��
	if (head == NULL)
	{
		return NULL;
	}
	//ͷ�ڵ㲻Ϊ��
	struct ListNode* cur = head;
	struct ListNode* prev = NULL;
	while (cur != NULL)
	{
		if (cur->val == val)
		{
			if (prev == NULL)
			{
				//��cur��ǰһ��Ϊ����˵��Ҫɾ����������ͷ�ڵ�
				head = cur->next;
			}
			else
			{
				//Ҫɾ���Ĳ���ͷ�ڵ�
				prev->next = cur->next;
			}
			free(cur);
			cur = cur->next;
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
	return head;
}