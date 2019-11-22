�������
���������ǿյ�����������ʾ�����Ǹ������������У����Ǹ��Ե�λ���ǰ�������ķ�ʽ�洢�ģ��������ǵ�ÿ���ڵ�ֻ�ܴ洢?һλ?����


��������ǽ��������������������᷵��һ���µ���������ʾ���ǵĺ͡�

�����Լ���������� 0 ֮�⣬���������������� 0?��ͷ��


ʾ����


���룺(2 -> 4 -> 3) + (5 -> 6 -> 4)

�����7 -> 0 -> 8

ԭ��342 + 465 = 807



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
        ListNode DHead = new ListNode(0);
        ListNode p = l1, q = l2, cur = DHead;
        int carry = 0;
        while(p != null || q != null){
            int x = (p = null) ? p.val : 0;
            int y = (q = null) ? q.val : 0;
            int Sum = x+y+carry;
            carry = Sum/10;
            cur.next = ListNode(Sum/10);
            cur = cur.next;
            if(p != null) p = p.next;
            if(q != null) q = q.next;
        }
        if(carry > 0){
            cur.next = new ListNode(carry); 
        }
    return DHead.next;
};