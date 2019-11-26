链表是逆置结构：
https://www.nowcoder.com/practice/d281619e4b3e4a60a2cc66ea32855bfa?tpId=49&&tqId=29370&rp=1&ru=/activity/oj&qru=/ta/2016test/question-ranking
对于一个链表，请设计一个时间复杂度为O(n),额外空间复杂度为O(1)的算法，判断其是否为回文结构。
给定一个链表的头指针A，请返回一个bool值，代表其是否为回文结构。
保证链表长度小于等于900。
测试样例：
1->2->2->1
返回：
true

解题思路：
【一、局部逆置】
把原链表从中间分开(要考虑到奇偶数位)，然后把后半段逆置，与前半段进行大小比较：
相等的话为回文，返回 true ；不等即不是回文的,返回 false
【二、整体逆置】先拷贝一份链表，直接把原链表进行逆置，然后把链表逆置前后进行比较：
相等的话为回文，返回 true ；不等即不是回文的,返回 false


注：[不建议使用这个方法，该题目告诉了‘保证链表长度小于等于900’，
才可以用捷径解法，如果超出限制的话是不可以使用该方法的，这里要注意哈！！！]

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class PalindromeList {
public:
    //逆置一个链表
    struct ListNode* reverseList(struct ListNode* head){
        if(head == NULL && head->next == NULL){
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
    
    bool chkPalindrome(ListNode* A) {
        
	/*
        //整体逆置(不建议使用这个方法，该题目告诉了‘保证链表长度小于等于900’，才可以用捷径解法，如果超出限制的话是不可以使用该方法的)
        ListNode* cur = A;
        int a[900] = {0};
        int n = 0;
        int i = 0;
        while(cur != NULL){
            a[i++] = cur->val;
            n++;
            cur = cur->next;
        }
        int left = 0, right = n-1;
        while(left < right){
            if(a[left] != a[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
       */
      
        //局部逆置**********************************************************
        // write code here
        //查找中间结点
        ListNode* slow = A, *fast = A;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
               
        ListNode* leftList = A;
        ListNode* rightList = slow->next;
        slow->next = NULL;
        //逆置右半段 
        rightList = reverseList(rightList);
                
        while(rightList != NULL){
            if(leftList->val != rightList->val)
                return false;
            leftList = leftList->next;
            rightList = rightList->next;
        }
        return true;
    }
   
};