//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	/* ��ʼ���б� */
//	// ��ע�⣬ C++ �� vector �����ı������� nums
//	// �޳�ʼֵ
//	std::vector<int> nums1;
//	// �г�ʼֵ
//	std::vector<int> nums = { 1, 3, 2, 5, 4 };
//
//	/* ����Ԫ�� */
//	int num = nums[1]; // �������� 1 ����Ԫ��
//	
//	/* ����Ԫ�� */
//	nums[1] = 0; // ���� 1 ����Ԫ�ظ���Ϊ0
//
//	/* ����б� */
//	nums.clear();
//
//	/* ��β�����Ԫ�� */
//	nums.push_back(1);
//	nums.push_back(3);
//	nums.push_back(2);
//	nums.push_back(5);
//	nums.push_back(4);
//
//	/* ���м����Ԫ�� */
//	nums.insert(nums.begin() + 3, 6); // ������ 3 ���������� 6
//
//	/* ɾ��Ԫ�� */
//	nums.erase(nums.begin() + 3); // ɾ������ 3 ����Ԫ��
//
//	/* ͨ�����������б� */
//	int count = 0;
//	for (int i = 0; i < nums.size(); i++)
//	{
//		count += nums[i];
//	}
//
//	/* ֱ�ӱ����б�Ԫ�� */
//	count = 0;
//	for (int num : nums)
//	{
//		count += num;
//	}
//
//	/* ƴ�������б� */
//	std::vector<int> nums1 = { 6, 8, 7, 10, 9 };
//	// ���б� nums1 ƴ�ӵ� nums ֮��
//	nums.insert(nums.end(), nums1.begin(), nums1.end());
//
//	/* �����б� */
//	std::sort(nums.begin(), nums.end()); // ������б�Ԫ�ش�С��������
//	return 0;
//}
//
