移除元素：https://leetcode-cn.com/problems/remove-element/submissions/
给定一个数组 nums?和一个值 val，你需要原地移除所有数值等于?val?的元素，返回移除后数组的新长度。


不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。

元素的顺序可以改变。
你不需要考虑数组中超出新长度后面的元素。


示例 1:

给定 nums = [3,2,2,3], val = 3,

函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 
2。

你不需要考虑数组中超出新长度后面的元素。


示例2:

给定 nums = [0,1,2,2,3,0,4,2], val = 2,

函数应该返回新的长度 5, 并且 nums 中的前五个元素为 0, 1, 3, 0, 4。


注意这五个元素可为任意顺序。

你不需要考虑数组中超出新长度后面的元素。



//<方法一——双指针>
遍历这组数，如果nums对应位置的数不是目标值，就把该数复制到对应下标的位置;
是目标值，就跳过当前位置继续比较；重复此过程，直至结束
【当nums[i]与给定目标值相等时，递增i以跳过该元素。
只要valnums[i]!=val，我们就复制nums[i]到 nums[index],并同时递增两个索引。
重复这一过程，直到i到达数组的末尾，该数组的新长度为i】

class Solution {
public:
    //<1>.双指针(复制)
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};


//<方法二——双指针>：当要删除的元素很少时
//遍历这组数，如果发现了与目标值相同的数，就与最后一位进行交换，
此时，数组的最后一位往前挪一位(即数组长度减小一位)，直至i<n

【当我们遇到 nums[i]==val 时，我们可以将当前元素与最后一个元素进行交换，
并释放最后一个元素。这实际上使数组的大小减少了1】
注意：被交换的最后一个元素可能是您想要移除的值。但是不要担心，在下一次迭代中，我们仍然会检查这个元素
class Solution {
public:
    //<2>.减短数组
    int removeElement(vector<int>& nums, int val){
        int i = 0;
        int n = nums.size();
        while(i < n){
            if(nums[i] == val){
                nums[i] = nums[n-1];
                n--;
            }else{
                i++;
            }
        }
        return n;
    }
};