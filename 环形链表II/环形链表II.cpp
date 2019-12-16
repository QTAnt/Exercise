给定一个链表，返回链表开始入环的第一个节点。
如果链表无环，则返回?null。
为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。
 如果 pos 是 -1，则在该链表中没有环。
说明：不允许修改给定的链表。
示例 1：

输入：head = [3,2,0,-4], pos = 1

输出：true

解释：链表中有一个环，其尾部连接到第二个节点。

示例?2：

输入：head = [1,2], pos = 0

输出：true

解释：链表中有一个环，其尾部连接到第一个节点。
!

示例 3:

输入：head = [1], pos = -1

输出：false

解释：链表中没有环。


/**

?*
?Definition?for?singly-linked?list.

?*?struct?ListNode?{

?*?????int?val;

?*?????ListNode?*next;

?*?????ListNode(int?x)?:?val(x),?next(NULL)?{}

?*?};

?*/

class?Solution?{
public:

????ListNode?*hasCycle(ListNode?*head)?{

????????ListNode*?slow?=?head;

????????ListNode*?fast?=?head;

????????while(fast?!=?NULL?&&?fast->next?!=?NULL){

????????????slow?=?slow->next;

????????????fast?=?fast->next->next;

????????????if(slow?==?fast)

????????????????return?slow;

????????}

????????????return?NULL;

????}

????struct?ListNode?*detectCycle(struct?ListNode?*head)?{

????????ListNode*?meet?=?hasCycle(head);

????????if(meet?==?NULL)

????????????return?NULL;

????????while(meet?!=?head){

????????????meet?=?meet->next;

????????????head?=?head->next;

????????}

????????return?meet;

????}

};



***
struct 去掉之后内存消耗会变小一些


class?Solution?{
public:

????ListNode?*hasCycle(ListNode?*head)?{

????????ListNode*?slow?=?head;

????????ListNode*?fast?=?head;

????????while(fast?!=?NULL?&&?fast->next?!=?NULL){

????????????slow?=?slow->next;

????????????fast?=?fast->next->next;

????????????if(slow?==?fast)

????????????????return?slow;

}

????????????return?NULL;


????}

????ListNode?*detectCycle(ListNode?*head)?{

????????ListNode*?meet?=?hasCycle(head);

????????if(meet?==?NULL)

????????????return?NULL;

????????while(meet?!=?head){

????????????meet?=?meet->next;

????????????head?=?head->next;

????????}

????????return?meet;

????}

};