//#include <iostream>
//#include <cmath>
//#include <string>
//
//int isSuShu(int n); // �ж���������
//
//int main()
//{
//    int x, y, i;
//    while (std::cin >> x >> y && (x || y))
//    {
//        for (i = x; i < y; i++)
//            if (isSuShu(i * i + i + 41) == 1) // if ��������ѭ����ǰ����
//                break;
//        if (i < y) // ����ѭ����ǰ����
//            std::cout << "Sorry" << std::endl;
//        else
//            std::cout << "OK" << std::endl;
//    }
//
//    return 0;
//}
//
//int isSuShu(int n)
//{
//    int i;
//    for (i = 2; i < sqrt(n); i++)
//		// ���a^2������b�Ļ�aҲ��������b
//		// ����4��������8��ô2Ҳ��������8��
//		// �෴���c������d�Ļ���ôc^2Ҳһ����������d��
//		// ����3��������25��ô9Ҳһ����������25.
//		// ����ѭ��ֻ��Ҫִ�е�n�ĸ��žͿ����ˣ�
//		// �ܼ�Сʱ�临�Ӷ�
//        if (n % i == 0)
//            // n������1�����������ĳ��������������ǰ����������1
//            return 1;
//    return 0;
//}
