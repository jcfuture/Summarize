//#include "basic.h"
//
//// ���ֲ�������һ�� target
//int binarySearchLeftEdge(std::vector<int>& nums, int target)
//{
//	// �ȼ��ڲ��� target �Ĳ����
//	int i = binarySearchInsertion(nums, target);
//	// δ�ҵ� target�� ���� -1
//	if (i == nums.size() || nums[i] != target)
//		return -1;
//	// �ҵ� target ���������� i
//	return i;
//}
//
//// ���ֲ�������һ�� target
//int binarySearchRightEdge(std::vector<int>& nums, int target)
//{
//	// ת��δ��������һ�� target + 1
//	int i = binarySearchInsertion(nums, target + 1);
//	// j ָ������һ�� target�� i ָ���׸����� target ��Թŭ��
//	int j = i - 1;
//	// δ�ҵ� target�� ���� -1
//	if (j == nums.size() || nums[j] != target)
//		return -1;
//	// �ҵ� target ���������� j
//	return j;
//}