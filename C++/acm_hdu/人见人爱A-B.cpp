//#include <iostream>
//
//int main()
//{
//	int n, m, i, numN[100], numM[100], arr[100], j, k, temp;
//	while (std::cin >> n >> m) {
//		if (n == 0 && m == 0) 
//			break;
//		if (n > 100 || m > 100 || n < 0 || m < 0) 
//			continue;
//		// ���� numN ��������
//		for (i = 0; i < n; i++) 
//			std::cin >> numN[i];
//		// ���� numM ��������
//		for (i = 0; i < m; i++) 
//			std::cin >> numM[i];
//		j = 0;
//		for (i = 0; i < n; i++) {
//			for (k = 0; k < m; k++)
//				if (numN[i] == numM[k])
//					break;
//			if (k == m) 
//				// �� numN �� numM û�е�Ԫ�ز���ͳ��������
//				arr[j++] = numN[i];
//		}
//		// ͳ�������С��������ð������
//		for (i = 1; i < j; i++) 
//			for (k = 0; k < j - i; k++) 
//				if (arr[k] > arr[k + 1]) {
//					temp = arr[k];
//					arr[k] = arr[k + 1];
//					arr[k + 1] = temp;
//				}
//		// ���Ϊ�ռ��ϣ������ ��NULL��
//		if (j == 0) 
//			std::cout << "NULL";
//		// ˳����������е�Ԫ��
//		else 
//			for (i = 0; i < j; i++)
//				std::cout << arr[i] << " ";
//		std::cout << std::endl;
//	}
//	return 0;
//}
