//#include <iostream>
//#include <string>
//
//class Solution {
//public:
//    bool isPalindrome2(std::string s) {
//        // ����˫ָ�룬�ֱ�ָ��ʼ�����
//        int start = 0, end = s.size() - 1;
//        while (start < end)
//        {
//            // ����ǰ�ַ��������ֻ�����ĸ����������ǰλ��Ԫ�ضԱ�
//            if (!isalnum(s[start]))
//                start++;
//            if (!isalnum(s[end]))
//                end--;
//            // ���ָ������ʱ���ж�Ԫ���ַ��Ƿ����
//            if (start < end && tolower(s[start]) != tolower(s[end]))
//                 return false;
//        }
//        return true;
//    }
//
//    bool isPalindrome(std::string s) {
//        std::string sgood;
//        for (char ch : s) {
//            if (isalnum(ch)) {
//                sgood += tolower(ch);
//            }
//        }
//        int start = 0, end = sgood.size() - 1;
//        while (start < end) {
//            if (sgood[start] != sgood[end]) {
//                return false;
//            }
//            ++ start;
//            -- end;
//        }
//        return true;
//    }
//};
//
////int main()
////{
////    Solution sol;
////    std::cout << sol.isPalindrome("adda") << std::endl;
////    std::cin.get();
////}