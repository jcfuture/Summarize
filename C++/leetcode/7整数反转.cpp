//#include <iostream>
//
//
//class Solution {
//public:
//	int reverse(int x) {
//		long long n = 0;
//		if (x == 0) return 0;
//		while (x % 10 == 0) 
//			x = x / 10;//ȥ����׺��
//		while (x != 0) { //���۶��������Ǹ���ͬ������
//			n = n * 10 + x % 10;//��x��ÿһ�θ�λ���ӵ�n��
//			x = x / 10;
//		}
//		if (n <= -2147483648 || n >= 2147483647) return 0;
//		return n;
//	}
//};
//
//int main()
//{
//	Solution sol;
//	std::cout << sol.reverse(1534236469) << std::endl;
//	return 0;
//}