//203:移除链表元素
//https://leetcode-cn.com/problems/remove-linked-list-elements/description/
////<法二>
//思路：此题删除链表中元素是很简单的，只需要让待删节点之前一个节点指向待删节点之后一个节点即可。 
此题最大的问题就是，题目要求我们要返回新链表中的头结点，如果我们就采用仅仅复制头结点的方式(用H = head)
然后用H进行操作，最后返回head。这样就会导致如果头结点也是我们需要删除的节点就会导致错误。
当然我们可以采用循环操作判断第一个不是我们要删除的节点，但是这样有些麻烦。最好的方式就是
我们创建一个新节点来作为整个链表的头结点，该节点中的值没有意义，只是用该节点来方便我们的操作。
如果用H->next = head; 此时 我们操作H的话就把原先的头结点当做了一个普通节点来操作，此时原先的头
结点就可以被删除了。最后返回H->next就满足条件了。正是由于有个无意义节点作为头结点会统一
操作（把头结点当做普通节点）所以实际链表设计过程中都是有个无意义头结点的，
遇到头结点不好解决的问题，大家可以设一个节点试试。

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

//<法二>
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

//<法三>
struct ListNode* removeElements(struct ListNode* head, int val) {
	//若头节点为空，返回一个空指针
	if (head == NULL)
	{
		return NULL;
	}
	//头节点不为空
	struct ListNode* cur = head;
	struct ListNode* prev = NULL;
	while (cur != NULL)
	{
		if (cur->val == val)
		{
			if (prev == NULL)
			{
				//当cur的前一个为空则说明要删除的正好是头节点
				head = cur->next;
			}
			else
			{
				//要删除的不是头节点
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