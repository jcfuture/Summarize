//#include "basic.h"
//
//// ���ڶѲ������������� k ��Ԫ��
//std::priority_queue<int, std::vector<int>, std::greater<int>> topKHeap(std::vector<int>& nums, int k)
//{
//	// ��ʼ��С����
//	std::priority_queue<int, std::vector<int>, std::greater<int>> heap;
//	// �������ǰ k ��Ԫ�����
//	for (int i = 0; i < k; i++)
//		heap.push(nums[i]);
//	// �ӵ� k + 1 ��Ԫ�ؿ�ʼ�����ֶѵĳ���Ϊ k
//	for (int i = k; i < nums.size(); i++)
//	{
//		// ����ǰԪ�ش��ڶѶ�Ԫ�أ��򽫶Ѷ�Ԫ�س��ѣ���ǰԪ�����
//		if (nums[i] > heap.top())
//		{
//			heap.pop();
//			heap.push(nums[i]);
//		}
//	}
//
//	return heap;
//}