217�����ظ�Ԫ��
https://leetcode-cn.com/problems/contains-duplicate/submissions/

����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�

����κ�ֵ�������г����������Σ��������� true��
���������ÿ��Ԫ�ض�����ͬ���򷵻� false��


ʾ�� 1:


����: [1,2,3,1]

���: true


ʾ�� 2:


����: [1,2,3,4]

���: false


ʾ��?3:


����: [1,1,1,3,3,4,3,2,4,2]

���: true

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int length=size(nums);
       if(length==0)return false;
       sort(&nums[0],&nums[length]);
       for(int i=0;i<length-1;i++){
           if(nums[i]==nums[i+1])
                return true; 
       } 
        return false;
    }
};
