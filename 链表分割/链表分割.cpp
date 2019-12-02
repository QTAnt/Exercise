����ָ�
https://www.nowcoder.com/practice/0e27e0b064de4eacac178676ef9c9d70?tpId=8&&tqId=11004&rp=2&ru=/activity/oj&qru=/ta/cracking-the-coding-interview/question-ranking
��Ŀ����
��д���룬�Ը���ֵxΪ��׼������ָ�������֣�����С��x�Ľ�����ڴ��ڻ����x�Ľ��֮ǰ
����һ�������ͷָ�� ListNode* pHead���뷵���������к�������ͷָ�롣
ע�⣺�ָ��Ժ󱣳�ԭ��������˳�򲻱䡣

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        ListNode *lessHead , *lessTail, *greaterHead , *greaterTail ;
        //lessHead = lessTail = (ListNode*)malloc(sizeof(ListNode));
        //greaterHead = greaterTail = (ListNode*)malloc(sizeof(ListNode));
        lessHead=new ListNode(0);
        greaterHead=new ListNode(0);
        lessTail=lessHead;
        greaterTail=greaterHead;
        ListNode* cur = pHead;
        while(cur){
            if(cur->val < x){
                lessTail-> next = cur;
                lessTail = lessTail-> next;
            }else{
                greaterTail->next = cur;
                greaterTail = greaterTail->next;
            }
            cur = cur->next;
        }
        
        greaterTail->next = NULL;    //һ��Ҫ�ÿգ���ֹ������������
        lessTail->next = greaterHead->next;
        return lessHead->next;
    }
};