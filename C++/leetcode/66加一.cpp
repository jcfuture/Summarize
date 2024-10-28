//#include <vector>
//
//class Solution {
//public:
//    /*std::vector<int> plusOne(std::vector<int>& digits) {
//        int n = digits.size();
//        while (n && ++digits[--n] == 10) digits[n] = 0;
//        if (digits[0] == 0) digits.insert(begin(digits), 1);
//        return digits;
//    }*/
//
//    std::vector<int> plusOne(std::vector<int>& digits)
//    {
//        int add = 0;
//        int len = digits.size() - 1;
//        for (int i = len; i >= 0; i--)
//        {
//            if (i == len - 1) digits[i] += 1;
//            else
//            {
//                digits[i] += add;
//                add = 0;
//            }
//                
//            add = digits[i] / 10;
//            digits[i] %= 10;
//            
//        }
//        
//        if (add > 0)
//        {
//            digits.insert(digits.begin(), add);
//        }
//        return digits;
//    }
//};