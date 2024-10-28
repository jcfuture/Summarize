//#include <string>
//#include <iostream>
//
//class Solution {
//public:
//    bool canConstruct(std::string ransomNote, std::string magazine) {
//        int numa[27]{0}, numb[27]{0};
//
//        for (int i = 0; i < ransomNote.size(); i++)
//        {
//            numa[(ransomNote[i] + 1) - 'a']++;
//        }
//
//        for (int j = 0; j < magazine.size(); j++)
//        {
//            numb[(magazine[j] + 1) - 'a']++;
//        }
//
//        bool flag = true;
//        for (int k = 0; k < ransomNote.size(); k++)
//        {
//            if (numa[(ransomNote[k] + 1) - 'a'] != numb[(ransomNote[k] + 1) - 'a']) flag = false;
//        }
//
//        return flag;
//    }
//};
//
////int main()
////{
////    Solution sol;
////    std::cout << sol.canConstruct("aa" , "ab") << std::endl;
////    std::cin.get();
////}