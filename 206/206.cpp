//����
//206����ת����

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
//<1>��ָ�뷨���ȱ��浱ǰλ�õ���һ��λ�ã��ٸı�ָ��
struct ListNode* reverseList(struct ListNode* head){
	struct ListNode *cur = head;
	struct ListNode *prev = NULL;
	struct ListNode *next;
	while (cur){
		next = cur->_next;
		cur->_next = prev;
		prev = cur;
		cur = next;
	}
	return prev;
}

//<2>�ݹ�
struct ListNode* reverseList(struct ListNode* head){
	if (head == NULL || head->next == NULL) return head;

	struct ListNode* h = reverseList(head->next);

	head->next->next = head;

	head->next = NULL;

	return h;
}

//<3>ȡ�ڵ㷴ת������һ���½ڵ㣬��ΪNULL
struct ListNode* reverseList(struct ListNode* head){
	struct ListNode* newnode = NULL;
	if (head = NULL || head->next = NULL)
		return head;
	while (head!=NULL){
		struct ListNode* next = head->_next;
		head->_next = newnode;
		newnode = head;
		head = next;
	}
	return newnode;
}

//<4>����һ���ƽڵ�
struct ListNode* reverseList(struct ListNode* head){
	if (head == nullptr || head->next == nullptr) return head;
	
	ListNode* dum = new ListNode(-1);//����һ���ƽڵ�
	
	dum->next = head;

	ListNode* newhead = dum;


	ListNode* q = dum, *t = head, *p = head->next;//��ʼ����ڵ㷴ת

	while (t->next)
	{

		t->next = p->next;

		p->next = q->next;

		q->next = p;


		p = t->next;

	}

	return newhead->next;
}