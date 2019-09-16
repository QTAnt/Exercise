//876.链表的中间节点:快慢指针
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
	ListNode* middleNode(ListNode* head) {
		ListNode* slow = head;
		ListNode* fast = head;
		while (fast && fast->_next){
			slow = slow->_next;
			fast = fast->_next->_next;
		}
		return slow;
};