//class Solution {
//public:
//    bool isPalindrome(int x) {
//        // �������ǻ�����
//        if (x < 0) return false;
//        // ��ȡ���һλ������
//        int result = x % 10;
//        x /= 10;
//        while (result < x) {
//            result *= 10;
//            result += (x % 10);
//            x /= 10;
//        }
//
//        return x == result || x == (result / 10);
//    }
//};