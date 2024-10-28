//class Solution {
//public:
//    bool isPalindrome(int x) {
//        // 负数不是回文数
//        if (x < 0) return false;
//        // 获取最后一位的数据
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