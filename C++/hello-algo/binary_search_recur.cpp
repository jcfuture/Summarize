//#include "basic.h"
//
//// ���ֲ����: ���� f(i, j)
//int dfs(std::vector<int>& nums, int target, int i, int j)
//{
//	// ������Ϊ�գ�������Ŀ��Ԫ�أ��򷵻� -1
//	if (i > j)
//		return -1;
//	// �����е�����
//	int m = (i + j) / 2;
//	if (nums[m] < target)
//		// �ݹ������� f(m + 1, j)
//		return dfs(nums, target, m + 1, j);
//	else if (nums[m] > target)
//		// �ݹ������� f(i, m - 1)
//		return dfs(nums, target, i, m - 1);
//	else
//		// �ҵ�Ŀ��Ԫ�أ�����������
//		return m;
//}
//
//// ���ֲ���
//int binarySearch(std::vector<int>& nums, int target)
//{
//	int n = nums.size();
//	// ������� f(0, n - 1)
//	return dfs(nums, target, 0, n - 1);
//}