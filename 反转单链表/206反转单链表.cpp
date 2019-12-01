[206反转单链表]
https://leetcode-cn.com/problems/reverse-linked-list/description/
反转一个单链表。
示例:
输入: 1->2->3->4->5->NULL
输出: 5->4->3->2->1->NULL

【C++】
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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode* n1 = head;
        ListNode* n2 = nullptr;
        ListNode* n3;
        while(n1 != NULL){
            n3 = n1->next;
            n1->next = n2;
            n2 = n1;
            n1 = n3;
        }
        return n2;
    }
};

【C】
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head){
	if (head == NULL || head->next==NULL)          //无节点，直接返回
		return head;

	struct ListNode* n1, *n2, *n3;
	n1 = head;
	n2 = n1->next;    //n1不为空
	n3 = n2->next;
	n1->next = NULL;
	while (n2)   //n2为空
	{
		n2->next = n1;    //方向反向,n2原先向后指，反向后断开
		n1 = n2;      //迭代
		n2 = n3;     
		if (n3)
			n3 = n3->next;
		//整个逆完后，n1为头
	}
	return n1;
}