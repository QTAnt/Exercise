���������ýṹ��
https://www.nowcoder.com/practice/d281619e4b3e4a60a2cc66ea32855bfa?tpId=49&&tqId=29370&rp=1&ru=/activity/oj&qru=/ta/2016test/question-ranking
����һ�����������һ��ʱ�临�Ӷ�ΪO(n),����ռ临�Ӷ�ΪO(1)���㷨���ж����Ƿ�Ϊ���Ľṹ��
����һ�������ͷָ��A���뷵��һ��boolֵ���������Ƿ�Ϊ���Ľṹ��
��֤������С�ڵ���900��
����������
1->2->2->1
���أ�
true

����˼·��
��һ���ֲ����á�
��ԭ������м�ֿ�(Ҫ���ǵ���ż��λ)��Ȼ��Ѻ������ã���ǰ��ν��д�С�Ƚϣ�
��ȵĻ�Ϊ���ģ����� true �����ȼ����ǻ��ĵ�,���� false
�������������á��ȿ���һ������ֱ�Ӱ�ԭ����������ã�Ȼ�����������ǰ����бȽϣ�
��ȵĻ�Ϊ���ģ����� true �����ȼ����ǻ��ĵ�,���� false


ע��[������ʹ���������������Ŀ�����ˡ���֤������С�ڵ���900����
�ſ����ýݾ��ⷨ������������ƵĻ��ǲ�����ʹ�ø÷����ģ�����Ҫע���������]

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class PalindromeList {
public:
    //����һ������
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
        //��������(������ʹ���������������Ŀ�����ˡ���֤������С�ڵ���900�����ſ����ýݾ��ⷨ������������ƵĻ��ǲ�����ʹ�ø÷�����)
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
      
        //�ֲ�����**********************************************************
        // write code here
        //�����м���
        ListNode* slow = A, *fast = A;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
               
        ListNode* leftList = A;
        ListNode* rightList = slow->next;
        slow->next = NULL;
        //�����Ұ�� 
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