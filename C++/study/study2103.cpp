//#include <iostream>
//#include <string>
//
//int main() {
//    unsigned int m, n, case_n;
//    unsigned int i, j, k, tmp, one = 1;
//
//    std::cin >> case_n; // ��������
//
//    while (case_n--) {
//        std::cin >> m >> n; // m�涨���ӳ�����������n��ʾ���˶��ٸ�����
//        k = j = 0; 
//        for (i = 1; i <= n; ++i) {
//            std::cin >> tmp; // ����ĺ����Ա�
//            if (tmp && !j) // ������ĺ����Ա�Ϊ����ʱ
//                j = i; // �������Գ����������к��Ӿ���ҪΪŮ�ԣ��Ҽ���
//        }
//        if ((m == n) && (j == 0 || j == n)) { // ���������������ﵽҪ������� ���ҳ�������������ΪҪ��ĺ�������ʱ
//            std::cout << "0 RMB" << std::endl;
//            continue;
//        }
//        if (j && j < n) // 
//            tmp = (one << (n - j)) - 1;
//        else
//            tmp = 0;
//        if (m < n)
//            k = (one << (n - m)) - 1;
//        else
//            k = 0;
//        tmp = (tmp > k) ? tmp : k;
//        if (tmp)
//            std::cout << tmp << "0000 RMB" << std::endl;
//        else
//            std::cout << "0 RMB" << std::endl;
//    }
//
//    return 0;
//}