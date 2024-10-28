//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <stack>
//
//class Solution {
//public:
//    bool isValid(std::string s) {
//        // ����ַ�������Ϊ����������ֱ�ӷ���
//        if (s.length() % 2 != 0) return false;
//
//        // �������ŵĶ�Ӧ��ϵ
//        std::unordered_map<char, char> maps = {
//            {')' , '('} ,
//            {']' , '['} ,
//            {'}' , '{'}
//        };
//
//        // ����ջ����
//        std::stack<char> rooms;
//
//        // �����ַ��������ÿһλ���ַ�
//        for (char ch : s)
//        {
//            // ����ڶ�Ӧ��ϵ�д����������
//            if (maps.count(ch))
//            {
//                // ջ��Ϊ�� ����ջ��Ԫ�ز�λ���Ŷ�Ӧ��ϵ�ж�Ӧ��Ԫ��
//                if (rooms.empty() || rooms.top() != maps[ch])
//                    return false;
//                else rooms.pop();
//
//            }
//            else rooms.push(ch); // ��Ԫ��ѹ��ջ
//        }
//
//        return rooms.empty();
//    }
//};
//
////int main()
////{
////    Solution sol;
////    std::string s;
////    std::cin >> s;
////    std::cout << sol.isValid(s) << std::endl;
////}