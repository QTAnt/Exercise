Metamorphic_jumping_step£º±äÌ¬ÌøÌ¨½×
class Solution {
public:
	int jumpFloorII(int number) {
	//2^(n-1) == 1 << (n-1)
	return 1<<(number-1);
	}
};