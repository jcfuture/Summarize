//#include "basic.h"
//
//// ���ֲ��Ҳ���㣨���ظ�Ԫ�أ�
//int binarySearchInsertionSimple(std::vector<int>& nums, int target)
//{
//	int i = 0, j = nums.size() - 1; // ��ʼ��˫������ [0, n - 1];
//	while (i <= j)
//	{
//		int m = i + (j - i) / 2; // �����е����� m
//		if (nums[m] < target) // �����˵�� target ������[m + 1, j]��
//			i = m + 1;
//		else if (nums[m] > target) // �����˵�� target ������[i, m - 1]��
//			j = m - 1;
//		else // �ҵ�Ŀ��Ԫ�أ����ز���� m
//			return m;
//	}
//	// δ�ҵ� target �����ز���� i
//	return i;
//}
//
//// ���ֲ��Ҳ���㣨�����ظ�Ԫ�أ�
//int binarySearchInsertion(std::vector<int>& nums, int target)
//{
//	int i = 0, j = nums.size() - 1; // ��ʼ��˫������ [0, n - 1];
//	while (i <= j)
//	{
//		int m = i + (j - i) / 2; // �����е����� m
//		if (nums[m] < target) // �����˵�� target ������[m + 1, j]��
//			i = m + 1;
//		else if (nums[m] > target) // �����˵�� target ������[i, m - 1]��
//			j = m - 1;
//		else
//			j = m - 1; // �׸�С�� target ��Ԫ��������[i, m - 1]��
//	}
//	// ���ز���� i
//	return i;
//}