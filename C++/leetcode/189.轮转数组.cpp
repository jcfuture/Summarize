//#include <vector>
//
//class Solution {
//public:
//    void rotate(std::vector<int>& nums, int k) 
//    {
//        k %= nums.size();
//
//        // ���������巭ת
//        reverse(nums, 0, nums.size() - 1);
//        // ������ǰ k ����ת
//        reverse(nums, 0, k - 1);
//        // ���������½��з�ת
//        reverse(nums, k, nums.size() - 1);
//    }
//
//    void reverse(std::vector<int>& nums, int start, int end)
//    {
//        while (start < end)
//        {
//            int temp = nums[start];
//            nums[start] = nums[end];
//            nums[end] = temp;
//            start++;
//            end--;
//        }
//    }
//};