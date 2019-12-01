[206��ת������]
https://leetcode-cn.com/problems/reverse-linked-list/description/
��תһ��������
ʾ��:
����: 1->2->3->4->5->NULL
���: 5->4->3->2->1->NULL

��C++��
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

��C��
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head){
	if (head == NULL || head->next==NULL)          //�޽ڵ㣬ֱ�ӷ���
		return head;

	struct ListNode* n1, *n2, *n3;
	n1 = head;
	n2 = n1->next;    //n1��Ϊ��
	n3 = n2->next;
	n1->next = NULL;
	while (n2)   //n2Ϊ��
	{
		n2->next = n1;    //������,n2ԭ�����ָ�������Ͽ�
		n1 = n2;      //����
		n2 = n3;     
		if (n3)
			n3 = n3->next;
		//���������n1Ϊͷ
	}
	return n1;
}