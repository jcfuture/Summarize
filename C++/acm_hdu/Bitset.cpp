// Give you a number on base ten,you should output it on base two.(0 < n < 1000)

//#include <iostream>
//#include <string>
//
//#define TO_STRING(x) std::to_string(x)
//
//// ������ÿλ�ϵ�����
//int* bit = new int[2] { 0, 1 };
//
//std::string tenToTwo(int num)
//{
//	std::string strs;
//	while (true)
//	{
//		// ����ֵ���� 2 ���� 0 ��ʱ�򣬽���ѭ��
//		if (num / 2 == 0)
//		{
//			// ����ֵ���� 2 ���� 0 ��ʱ����Ҫ�����������ŵ��ַ�����
//			if (num % 2 != 0) strs.insert(0, TO_STRING(bit[num % 2]));
//			break;
//		}
//		// ��ת�������� 2 ����ȡ��,Ȼ������ӽ��ַ�����λ
//		strs.insert(0, TO_STRING(bit[num % 2]));
//		// ʮ���� -> ������ ģ2ȡ�෨
//		num /= 2;
//	}
//	return strs;
//}
//
//int main()
//{
//	
//	// ���ڽ��������ʮ������
//	int num;
//	while (std::cin >> num)
//		std::cout << tenToTwo(num) << std::endl;
//	return 0;
//}