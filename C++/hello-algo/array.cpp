//#include <iostream>
//
///* ��ʼ������ */
//// �洢��ջ��
//int arr[5];
//int nums[5] = { 1, 2, 3, 5, 4 };
//// �洢�ڶ��ϣ���Ҫ�ֶ��ͷſռ䣩
//int* arr1 = new int[5];
//int* nums1 = new int[5] { 1, 2, 3, 5, 4 };
//
///* �������Ԫ�� */
//int randomAccess(int* nums, int size)
//{
//	// ������[0, size)�������ȡһ����
//	int randomIndex = rand() % size;
//	// ��ȡ���������Ԫ��
//	int randomNum = nums[randomIndex];
//	return randomNum;
//}
//
///* ����������� index ������Ԫ�� num */
//void insert(int* nums, int size, int num, int index)
//{
//	// ������ index �Լ�֮�������Ԫ������ƶ�һλ
//	for (int i = size - 1; i > index; i--)
//	{
//		nums[i] = nums[i - 1];
//	}
//	// �� num ��ֵ�� index ����Ԫ��
//	nums[index] = num;
//}
//
///* ɾ������ index ����Ԫ�� */
//void remove(int* nums, int size, int index)
//{
//	// ������ index ֮�������Ԫ����ǰ�ƶ�һλ
//	for (int i = index; i < size; i++)
//	{
//		nums[i] = nums[i + 1];
//	}
//}
//
///* �������� */
//void traverse(int* nums, int size)
//{
//	int count = 0;
//	// ͨ��������������
//	for (int i = 0; i < size; i++) 
//	{
//		count += nums[i];
//	}
//}
//
///* �������в���ָ��Ԫ�� */
//int find(int* nums, int size, int target)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (nums[i] == target) return i;
//	}
//	return -1;
//}
//
///* ��չ���鳤�� */
//int* extend(int* nums, int size, int enlarge)
//{
//	// ��ʼ��һ����չ���Ⱥ������
//	int* res = new int[size += enlarge];
//	// ��ԭ�����е�����Ԫ�ظ��Ƶ�������
//	for (int i = 0; i < size; i++)
//	{
//		res[i] = nums[i];
//	}
//	// �ͷ��ڴ�
//	delete[] nums;
//	// ������չ���������
//	return res;
//}
