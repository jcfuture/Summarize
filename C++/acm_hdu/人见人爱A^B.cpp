//# include <iostream>
//
//int main()
//{
//    int A, B;
//    // ���������ֵͬʱΪ 0 ʱ����
//    while (std::cin >> A >> B && (A != 0 && B != 0)) 
//    {
//        //���A����999����ֻȡA�ĺ���λ�����к���ļ��㼴��
//        if (A > 999)
//            A %= 1000;
//
//        int num = A;
//        int ge, shi, bai;
//
//        ge = num % 10; // ��λ  
//        shi = num % 100 / 10; // ʮλ
//        bai = num / 100; // ��λ
//
//        // num = (ԭ��λ���ĸ�λ*num*1 + ʮλ*num*10 + ��λ*num*100) % 1000
//        for (int i = 1; i < B; i++)     //��Ҫע��ѭ����˵Ĵ���
//            num = (ge * num + shi * num * 10 + bai * num * 100) % 1000;
//
//        //������
//        std::cout << num << std::endl;
//    }
//
//    return 0;
//}
//
