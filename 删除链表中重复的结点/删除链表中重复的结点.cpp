删除链表中重复的结点
https://www.nowcoder.com/practice/fc533c45b73a41b0b44ccba763f866ef?tpId=13&&tqId=11209&rp=1&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking
题目描述
在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。 
例如，链表1->2->3->3->4->4->5 处理后为 1->2->5

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