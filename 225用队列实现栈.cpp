225�ö���ʵ��ջ
https://leetcode-cn.com/problems/implement-stack-using-queues/submissions/
ʹ�ö���ʵ��ջ�����в�����


push(x) -- Ԫ�� x ��ջ

pop() -- �Ƴ�ջ��Ԫ��

top() -- ��ȡջ��Ԫ��

empty() -- ����ջ�Ƿ�Ϊ��

ע��:


��ֻ��ʹ�ö��еĻ�������-- Ҳ����?push to back, peek/pop from front, size, ��?is empty?��Щ�����ǺϷ��ġ�

����ʹ�õ�����Ҳ��֧�ֶ��С�?�����ʹ�� list ���� deque��˫�˶��У���ģ��һ������?, ֻҪ�Ǳ�׼�Ķ��в������ɡ�

����Լ������в���������Ч�ģ�����, ��һ���յ�ջ������� pop ���� top ��������



class MyStack {
public:
    queue<int> q1, q2;
    MyStack() {
    }
    
    void push(int x) {
        if(q1.empty()){
            q2.push(x);
            return;
        }
        if(q2.empty()){
            q1.push(x);
            return;
        }
    }
    
    int pop() {
        int t;
        if(q1.empty()){
            if(q2.size() == 1){
                t = q2.front();
                q2.pop();
                return t;
            }
            else{
                while(q2.size() > 1){
                    q1.push(q2.front());
                    q2.pop();
                }
                t = q2.front();
                q2.pop();
                return t;
            }
        }
        if(q2.empty()){
            if(q1.size() == 1){
                t = q1.front();
                q1.pop();
                return t;
            }
            else{
                while(q1.size() > 1){
                    q2.push(q1.front());
                    q1.pop();
                }
                t = q1.front();
                q1.pop();
                return t;
            }
        }
        return 0;
    }
    
    int top() {
        if(q1.empty())
            return q2.back();
        else
            return q1.back();
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
    }
};


/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */