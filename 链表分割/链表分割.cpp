链表分割
https://www.nowcoder.com/practice/0e27e0b064de4eacac178676ef9c9d70?tpId=8&&tqId=11004&rp=2&ru=/activity/oj&qru=/ta/cracking-the-coding-interview/question-ranking
题目描述
编写代码，以给定值x为基准将链表分割成两部分，所有小于x的结点排在大于或等于x的结点之前
给定一个链表的头指针 ListNode* pHead，请返回重新排列后的链表的头指针。
注意：分割以后保持原来的数据顺序不变。

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
        
        greaterTail->next = NULL;    //一定要置空，防止环形链表的情况
        lessTail->next = greaterHead->next;
        return lessHead->next;
    }
};