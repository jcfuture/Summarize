//#include <iostream>
//#include <string>
//
//// ��ʼ����׳����� 0-9
//int* nums = new int[10] {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
//
//// ����һ���� ���ڼ����ַ�ת���� 0 ���ַ�����Ϊ48
//#define CHAR_TO_INT(x) (int)x - 48
//
//// �������������ֵ
//#define INT_MAX 51201
//
//bool isJudge(int num)
//{
//	// ����ÿһλ���ֵĽ׳��ۼ�ֵ
//	int temp = 0;
//	// ������ת��Ϊ�ַ���
//	std::string strs = std::to_string(num);
//	// �����ַ�����ÿһλ
//	for (int i = 0; i < strs.size(); i++)
//		// �Ƚ��ַ�����ÿһλ���ַ�������ֵת��
//		// �ڽ���ֵת����������ŵ�������ȥ��ȡ��Ӧ�Ľ׳�
//		// ���ʹ���ۼӣ�����ÿһλ�Ľ׳˺�
//		temp += nums[CHAR_TO_INT(strs[i])];
//	return temp == num; // �����ۼ�ֵ�Ƿ���ԭ����ͬ
//}
//
//int main()
//{
//	for (int i = 0; i < INT_MAX; i++)
//		if (isJudge(i)) std::cout << i << std::endl;
//	return 0;
//}