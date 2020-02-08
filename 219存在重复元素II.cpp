219�����ظ�Ԫ��II
https://leetcode-cn.com/problems/contains-duplicate-ii/submissions/
����һ�����������һ������?k���ж��������Ƿ����������ͬ������?i?��?j��
ʹ��?nums [i] = nums [j]������ i �� j?�Ĳ�ľ���ֵ���Ϊ k��


ʾ��?1:


����: nums = [1,2,3,1], k = 3

���: true

ʾ�� 2:


����: nums = [1,0,1,1], k = 1

���: true

ʾ�� 3:


����: nums = [1,2,3,1,2,3], k = 2

���: false



class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size(), idx = 0;
        unordered_map<int, int> nmap; // key:nums[i], value:index
        for (int i = 0; i < n; ++i) {
            auto iter = nmap.find(nums[i]);
            if (iter != nmap.end()) {
                if (i - iter->second <= k) return true;
                else iter->second = i;
            }
            else nmap[nums[i]] = i;
        }
        return false;
    }
};