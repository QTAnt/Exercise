201���ַ�Χ��λ��
https://leetcode-cn.com/problems/bitwise-and-of-numbers-range/
������Χ [m, n]������ 0 <= m <= n <= 2147483647�����ش˷�Χ���������ֵİ�λ�루���� m, n ���˵㣩��


ʾ�� 1:?


����: [5,7]

���: 4


ʾ�� 2:


����: [0,1]

���: 0



class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
    {
        int count = 0; // ͳ����λ����
        while (m != n)
        {
            m >>= 1;
            n >>= 1;
            count++;
        }
        n <<= count;
        return n;
    }
    }
};