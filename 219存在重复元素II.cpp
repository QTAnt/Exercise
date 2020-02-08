219存在重复元素II
https://leetcode-cn.com/problems/contains-duplicate-ii/submissions/
给定一个整数数组和一个整数?k，判断数组中是否存在两个不同的索引?i?和?j，
使得?nums [i] = nums [j]，并且 i 和 j?的差的绝对值最大为 k。


示例?1:


输入: nums = [1,2,3,1], k = 3

输出: true

示例 2:


输入: nums = [1,0,1,1], k = 1

输出: true

示例 3:


输入: nums = [1,2,3,1,2,3], k = 2

输出: false



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