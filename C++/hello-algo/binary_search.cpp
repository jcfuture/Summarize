//#include "basic.h"
//
//// ���ֲ��ң�˫�����䣩
//int binarySearch(std::vector<int>& nums, int target)
//{
//	// ��ʼ��˫������[0, n - 1], �� i�� j�ֱ�ָ��������Ԫ�أ�βԪ��
//	int i = 0, j = nums.size() - 1;
//	// ѭ��������������Ϊ��ʱ�������� i > j ʱΪ�գ�
//	while (i <= j)
//	{
//		int m = i + (j - i) / 2; // �����е����� m
//		if (nums[m] < target) // �����˵�� target ������[m + 1, j]��
//			i = m + 1;
//		else if (nums[m] > target) // �����˵�� target ������[i, m - 1]��
//			j = m - 1;
//		else // �ҵ�Ŀ��Ԫ�أ�����������
//			return m;
//	}
//	// ��δ�ҵ�Ŀ��Ԫ�أ��򷵻� -1
//	return -1;
//}
//
//// ���ֲ��ң�����ҿ����䣩
//int binarySearchLCRO(std::vector<int>& nums, int target)
//{
//	// ��ʼ��˫������[0, n), �� i�� j�ֱ�ָ��������Ԫ�أ�βԪ�� + 1
//	int i = 0, j = nums.size();
//	// ѭ��������������Ϊ��ʱ�������� i = j ʱΪ�գ�
//	while (i < j)
//	{
//		int m = i + (j - i) / 2; // �����е����� m
//		if (nums[m] < target) // �����˵�� target ������[m + 1, j)��
//			i = m + 1;
//		else if (nums[m] > target) // �����˵�� target ������[i, m)��
//			j = m - 1;
//		else // �ҵ�Ŀ��Ԫ�أ�����������
//			return m;
//	}
//	// ��δ�ҵ�Ŀ��Ԫ�أ��򷵻� -1
//	return -1;
//}