234 ��������
https://leetcode-cn.com/problems/palindrome-linked-list/
���ж�һ�������Ƿ�Ϊ��������
ʾ�� 1:
����: 1->2
���: false
ʾ�� 2:
����: 1->2->2->1
���: true
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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return 1;
        ListNode *fast = head, *slow = head;
        ListNode *p, *pre = NULL;
        while(fast && fast->next){
            p = slow;
            slow = slow->next;    //��������
            fast = fast->next->next;

            p->next = pre;  //��ת
            pre = p;
        }
        if(fast)  //�������ڵ�ʱ�����м�ڵ�
            slow = slow->next;

        while(p){       //ǰ�벿�ֺͺ�벿�ֱȽ�
            if(p->val != slow->val)
                return 0;
            p = p->next;
            slow = slow->next;
        }
        return 1;
    }
};