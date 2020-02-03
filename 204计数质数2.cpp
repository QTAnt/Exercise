204计数质数
统计所有小于非负整数n的质数的数量

https://leetcode-cn.com/problems/count-primes/solution/ru-he-gao-xiao-pan-ding-shai-xuan-su-shu-by-labula/
示例：

输入：10

输出：4

解释：小于10的质数一共有4个，它们是2,3,4,7
方法一：暴力法（计算超时）


将其对每一个比其小的数进行取余运算，并对取余为0的结果进行计数。
由于质数是只指在大于1的自然数中，除了1和它本身以外不在有其他因数的自然数。
所以，当计数结果为1时，该数为质数
实际操作中，1和任意一个数取余必然为0，
可以直接排除，即可从2开始；当没有取余为0的情况时，其才为质数。

int countPrimes(int n){

    int count = 0;

    for(int i = 2; i < n; i++){

        bool sign = true;

        for(int j = 2; j < i; j++){

            if(i%j) == 0;

            {

                sign =  false;

                break;

            }

        }

        if(sign)

            count++;

    }

}


方法二：优化暴力算法

对正整数n,如果用2到根号n之间(包含边界)的所有整数去除，均无法整除，
则n为质数；并且，可发现，一切非2偶数一定不可能为质数。所以可以在此处进行另一步优化


方法三：厄拉多塞筛法

选中数字2、3、5、7......并排除2、3、5、7......的倍数，重复以上操作即可
，最终未排除的数即为质数


class Solution{
public:

    int countPrimes(int n){

    int count = 0;
    //初始默认所有数为质数

    vector<bool> signs(n, true);

    for(int i = 2; i < n; i ++){
 
       if(signs[i]){

            count ++;

            for(int j = i+i; j < n; j += i){
  
                signs[j] = false;    //i的倍数不可能是素数了

            }

      }

    }

    return count;

    }

};
