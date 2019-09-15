//链表
//206：反转链表

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
//<1>三指针法：先保存当前位置的下一个位置，再改变指向
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

//<2>递归
struct ListNode* reverseList(struct ListNode* head){
	if (head == NULL || head->next == NULL) return head;

	struct ListNode* h = reverseList(head->next);

	head->next->next = head;

	head->next = NULL;

	return h;
}

//<3>取节点反转：定义一个新节点，设为NULL
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

//<4>创建一个哑节点
struct ListNode* reverseList(struct ListNode* head){
	if (head == nullptr || head->next == nullptr) return head;
	
	ListNode* dum = new ListNode(-1);//创建一个哑节点
	
	dum->next = head;

	ListNode* newhead = dum;


	ListNode* q = dum, *t = head, *p = head->next;//开始逐个节点反转

	while (t->next)
	{

		t->next = p->next;

		p->next = q->next;

		q->next = p;


		p = t->next;

	}

	return newhead->next;
}