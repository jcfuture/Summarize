//#include<iostream>
//#include<string>
//
//#define max(a,b) (a>b?a:b)
//
//int main()
//{
//	std::string s1, s2;
//	while (std::cin >> s1 >> s2)
//	{
//		int i, j;
//
//		for (i = 0; i < s1.length(); i++)
//			if (s1[i] == '.')
//				break;
//		int int_len_1 = i;//s1������λ����
//
//		int decimal_len_1 = s1.length() - int_len_1 - 1;//s1��С��λ����
//
//		for (i = 0; i < s2.length(); i++)
//			if (s2[i] == '.')
//				break;
//		int int_len_2 = i;//s2������λ����
//		int decimal_len_2 = s2.length() - int_len_2 - 1;//s2��С��λ����
//
//		//��������λ��ʹs1��s2������λ����
//		if (int_len_1 < int_len_2)
//			for (i = 1; i <= int_len_2 - int_len_1; i++)
//				s1 = '0' + s1;
//		else if (int_len_2 < int_len_1)
//			for (i = 1; i <= int_len_1 - int_len_2; i++)
//				s2 = '0' + s2;
//
//		//��s1��s2��ǰ����1λ0����Ϊ���磺2.6+7.5 = 10.1����λ�������.
//		s1 = '0' + s1;
//		s2 = '0' + s2;
//
//		//����С��λ��ʹs1��s2С��λ����
//		if (decimal_len_1 < decimal_len_2)
//			for (i = 1; i <= decimal_len_2 - decimal_len_1; i++)
//				s1 = s1 + '0';
//		else if (decimal_len_2 < decimal_len_1)
//			for (i = 1; i <= decimal_len_1 - decimal_len_2; i++)
//				s2 = s2 + '0';
//
//		int node = max(int_len_1, int_len_2) + 1;//С������±�
//
//		//ȥ��С����
//		s1 = s1.erase(node, 1);
//		s2 = s2.erase(node, 1);
//
//		//���棬���Խ�s1��s2���������ӷ�����.
//		//ģ��"����"s1��s2�ļӷ����̣��������s1��
//		int len = s1.length();
//		int c = 0;
//		for (i = len - 1; i >= 0; i--)
//		{
//			int x = s1[i] - '0';//��s1��ĳ���ַ�ת��Ϊ�ַ���Ӧ������
//			int y = s2[i] - '0';
//
//			c += (x + y);
//			s1[i] = (c % 10 + '0');//ע�� +'0'�ǽ����� c%10 ת��Ϊ��Ӧ���ַ�
//
//			c /= 10;
//		}
//
//		//���ˣ�������ϣ��������������.
//
//		for (i = 0; i < len; i++)
//			if (s1[i] != '0')//�ӷ��������λ��ʼ���
//				break;
//		for (j = i; j < node; j++)
//			std::cout << s1[j];//�������λ
//
//		for (j = len - 1; j >= node; j--)//����С��Ϊ�Ƿ�Ϊ0
//			if (s1[j] != '0')
//				break;
//		if (j >= node)//����������£�С��Ϊ��ȫΪ0
//		{
//			std::cout << ".";//���С����
//			for (i = node; i <= j; i++)
//				std::cout << s1[i];//���С��λ
//		}
//
//		std::cout << std::endl;
//	}
//
//	return 0;
//}