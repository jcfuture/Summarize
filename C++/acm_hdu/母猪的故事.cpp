//#include <iostream>
//
//int main()
//{
//	int* num = new int[21];
//	num[1] = 1; // ��һ��
//	num[2] = 2; // �ڶ��� ĸ��ʼ����
//	num[3] = 3; // ������ ĸ���ٴ�����
//	for (int i = 4; i < 21; i++)
//		// �˺�ÿһ�� ĸ��������Ϊͷһ���ĸ��������������ȥ��ǰ�����ĸ������
//		num[i] = num[i - 1] * 2 - num[i - 3];
//
//	int N;
//	while (std::cin >> N)
//	{
//		while (N --)
//		{
//			int n;
//			std::cin >> n;
//			std::cout << num[n] << std::endl;
//		}
//	}
//	return 0;
//}