//#include <iostream>
//#include <string>
//#include <vector>
//
////���룺strs = ["flower", "flow", "flight"]
////�����"fl"
////
////���룺strs = ["dog", "racecar", "car"]
////�����""
//
//class Solution {
//public:
//    std::string longestCommonPrefix(std::vector<std::string>& strs) {
//        if (strs.empty() || strs.size() == 0) return "";  // ���vector������Ԫ��Ϊ�գ�ֱ�ӷ��ؿ��ַ���
//
//        std::string pre = strs[0];  // ����һ���ַ�����Ϊ��ʼǰ׺
//
//        for (int i = 1; i < strs.size(); i++) {
//            // ����Ƚϵ�ǰ�ַ�����ǰ׺���ַ�
//            int j = 0;
//            while (j < pre.length() && j < strs[i].length() && pre[j] == strs[i][j]) j++;
//            pre = pre.substr(0, j);  // ����ǰ׺Ϊ��ͬ���Ӵ�
//            if (pre.empty()) break;  // ���ǰ׺Ϊ�գ�����Ҫ�����Ƚ�
//        }
//        return pre;
//    }
//};