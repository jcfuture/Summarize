//#include "basic.h"
//
//// ��ϣ�Ż�
//// ����ö��
//std::vector<int> twoSumBruteForce(std::vector<int>& nums, int target)
//{
//	int size = nums.size();
//	// ����ѭ����ʱ�临�Ӷ� O(n^2)
//	for (int i = 0; i < size - 1; i++)
//		for (int j = i + 1; j < size; j++)
//		{
//			if (nums[i] + nums[j] == target)
//				return { i , j };
//		}
//	return {};
//}
//
//// ������ϣ��
//std::vector<int> twoSumHashTable(std::vector<int>& nums, int target)
//{
//	int size = nums.size();
//	// ������ϣ���ռ临�Ӷ�ΪO(n)
//	std::unordered_map<int, int> dic;
//	// ����ѭ����ʱ�临�Ӷ�ΪO(n)
//	for (int i = 0; i < size - 1; i++)
//	{
//		if (dic.find(target - nums[i]) != dic.end())
//			return { dic[target - nums[i]], i };
//		dic.emplace(nums[i], i);
//	}
//	return {};
//}