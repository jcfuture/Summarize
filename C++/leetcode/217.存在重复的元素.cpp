//#include <iostream>
//#include <vector>
//
///*
//    ���η���
//    1.����������
//    2.���С����
//    3.��������
//*/
//
//class Solution {
//public:
//    bool containsDuplicate(std::vector<int>& nums) {
//        andSort(nums, 0, nums.size());
//        return true;
//    }
//
//    void andSort(std::vector<int>& nums, int start, int end)
//    {
//        if (start < end)
//        {
//            int mid = (start + end) / 2;
//            andSort(nums, start, mid);
//            andSort(nums, mid + 1, end);
//            andSort(nums, start, mid);
//        }
//    }
//
//
//    void merge(std::vector<int>& nums, int low, int mid, int hight)  //�ϲ�����
//    {
//        std::vector<int> temp;  //�� new ����һ����������
//        int i = low, j = mid + 1, k = 0;    // kΪ b �����С��
//        while (i <= mid && j <= hight)
//        {
//            if (nums[i] <= nums[j])
//                temp[k++] = nums[i++];  //����С�������� b ��������
//            else
//                temp[k++] = nums[j++];
//        }
//        while (i <= mid)  // j ���н�������ʣ��� i ���в����� b ������ 
//            temp[k++] = nums[i++];
//        while (j <= hight)// i ���н�������ʣ��� j ���в����� b ������ 
//            temp[k++] = nums[j++];
//        k = 0;  //��С��Ϊ 0 ��ʼ����
//        for (int i = low; i <= hight; i++)  //�� b �����ֵ���ݸ����� a
//            nums[i] = temp[k++];
//    }
//};
//
//int main()
//{
//    Solution sol;
//    std::vector<int> nums = { 1, 2, 33, 4, 95, 2, 0 };
//    sol.containsDuplicate(nums);
//    for (int i = 0; i < nums.size(); i++)
//    {
//        std::cout << nums[i] << " ,";
//    }
//    std::cin.get();
//}