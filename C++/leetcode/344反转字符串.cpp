//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//class Solution {
//public:
//	void reverseString(std::vector<char>& s) {
//		int left = 0, right = s.size() - 1; // �ֱ���Ϊͷ��β��ָ��
//		while (left <= right) // ��ͷָ����βָ�����࣬����δ�����м�λ��
//		{
//			char temp = s[left];
//			s[left] = s[right];
//			s[right] = temp;
//			left++;
//			right--;
//		}
//	}
//};
//
//int main()
//{
//	//std::vector<char> vecs = { 'h','e','l','l','o' };
//	std::vector<char> vecs = { 'H','a','n','n','a' , 'h'};
//	Solution sol;
//	sol.reverseString(vecs);
//	std::for_each(vecs.begin(), vecs.end(), [](const char ch) { std::cout << ch << " "; });
//	return 0;
//}