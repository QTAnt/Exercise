ɾ���������ظ��Ľ��
https://www.nowcoder.com/practice/fc533c45b73a41b0b44ccba763f866ef?tpId=13&&tqId=11209&rp=1&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking
��Ŀ����
��һ������������У������ظ��Ľ�㣬��ɾ�����������ظ��Ľ�㣬�ظ��Ľ�㲻��������������ͷָ�롣 
���磬����1->2->3->3->4->4->5 �����Ϊ 1->2->5

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if(pHead == NULL || pHead->next == NULL)
            return pHead;
        ListNode* Head = new ListNode(0);
        Head->next = pHead;
        ListNode* first = Head;
        ListNode* last = first->next;
        while(last != NULL){
            if(last->next != NULL && last->val == last->next->val){
                while(last->next != NULL && last->val == last->next->val){
                    last = last->next;
                }
                first->next = last->next;
                last = last->next;
            }else{
                first = first->next;
                last = last->next;
            }
        }
        return Head->next;
    }
};