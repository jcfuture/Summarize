//#include <iostream>
//#include <string>
//
//std::string erase_zero(std::string str)
//{
//    int i, pos, len;
//    pos = str.find(".");
//    // ���ж��Ƿ�ΪС��
//    if (pos != std::string::npos) {
//        len = str.length();
//        // �ҵ������㡱�Ŀ�ʼλ��
//        for (i = len - 1; str[i] == '0'; i--) {}
//        if (i == pos) {
//            // ���С�����ȫ��Ϊ�㣬��Ҫɾ��С����
//            str.erase(i, len - i);
//        }
//        else {
//            // ɾ�������㡱
//            str.erase(i + 1, len - i - 1);
//        }
//    }
//    return str;
//}
//
//int main()
//{
//    std::string A, B;
//    while (std::cin >> A >> B) {
//        if (erase_zero(A) == erase_zero(B)) {
//            std::cout << "YES";
//        }
//        else {
//            std::cout << "NO";
//        }
//        std::cout << std::endl;
//    }
//    return 0;
//}
//
//
//
