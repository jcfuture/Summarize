//#include <vector>
//
//class Solution {
//public:
//    int removeElement(std::vector<int>& nums, int val) {
//        // ��������ָ�룬�ֱ��Ӧ�ڵ�һ�������һ��Ԫ��
//        int left = 0, right = nums.size();
//        // ��ָ���Ƿ�С����ָ��
//        while (left < right) {
//            // ���leftλ�ö�Ӧ����ֵ����val
//            if (nums[left] == val) {
//                // ����ǰλ��Ԫ�����¸�ֵΪvector���һ����ֵ
//                nums[left] = nums[right - 1];
//                // ɾ��Ԫ�غ󣬳��ȼ���
//                right--;
//            }
//            else {
//                // ͷָ�������һ��
//                left++;
//            }
//        }
//        return left;
//    }
//};