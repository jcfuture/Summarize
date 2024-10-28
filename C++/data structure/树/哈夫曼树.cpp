//#include <iostream>
//
//// �������Ĵ洢��ʾ
//typedef struct
//{
//	int weight; // �ڵ��Ȩֵ
//	int parent, lchild, rchild; // �ڵ��˫�ף����ӣ��Һ��ӵ��±�
//}HTNode , *HuffmanTree;
//
//// �����������
////void CreateHuffmanTree(HuffmanTree& HT, int n)
////{
////	// �����������HT
////	if (n <= 1) return;
////	int m = 2 * n - 1;
////	HT = new HTNode[m + 1]; // 0�ŵ�Ԫδ�ã�������Ҫ��̬����m+1����Ԫ��HT[m]��ʾ���ڵ�
////	for (int i = 1; i <= m; ++i) // ��1~m�ŵ�Ԫ�е�˫�ף����ӣ��Һ��ӵ��±��ʼ��Ϊ0
////	{
////		HT[i].parent = 0;
////		HT[i].lchild = 0;
////		HT[i].rchild = 0;
////	}
////	for (int i = 1; i <= n; ++i) // ����ǰn����Ԫ��Ҷ�ӽڵ��Ȩֵ
////		std::cin >> HT[i].weight;
////
////	for (int i = n + 1; i <= m; ++i)
////	{
////		// ͨ��n-1�ε�ѡ��ɾ�����ϲ���������������
////		Select(HT, i - 1, s1, s2);
////		// ��HT[k](1<=l<=i -1)��ѡ��������˫����Ϊ0��Ȩֵ��С�Ľڵ㣬������������HT�е����s1��s2
////		HT[s1].parent = i;
////		HT[s2].parent = i;
////		// �õ��½ڵ�i����ɭ����ɾ��s1,s2����s1��s2��˫������0��Ϊi
////		HT[i].lchild = s1;
////		HT[i].rchild = s2; // s1 �� s2 �ֱ���Ϊi�����Һ���
////		HT[i].weight = HT[s1].weight + HT[s2].weight; // i��ȨֵΪ���Һ���Ȩֵ֮��
////	} // for
////}
//
//typedef char** HuffmanCode; // ��̬��������洢�����������
//
//// ���ݹ������������������
////void CreateHuffmanCode(HuffmanTree HT, HuffmanCode& HC, int n)
////{
////	// ��Ҷ�ӵ���������ÿ���ַ��Ĺ��������룬�洢�ڱ����HC��
////	HC = new char* [n + 1]; // ����洢n���ַ�����ı����ռ�
////	char* cd = new char[n]; // ������ʱ���ÿ���ַ�����Ķ�̬����ռ�
////	cd[n - 1] = '\0'; // ���������
////	for (int i = 1; i <= n; i++) // ����ַ������������
////	{
////		int start = n - 1; // start��ʼʱָ����󣬼����������λ��
////		int c = i;
////		HuffmanTree f = HT[i].parent; // fָ��ڵ�c��˫�׽ڵ�
////		while (f != 0)
////		{
////			--start; // ����һ��start��ǰָһ��λ��
////			if (HT[f].lchild == c)
////				cd[start] = '0'; // �ڵ�c��f�����ӣ������ɴ���0
////			else
////				cd[start] = '1'; // �ڵ�c��f���Һ��ӣ������ɴ���1
////			c = f;
////			f = HT[f].parent; // �������ϻ���
////		} // �����i���ַ��ı���
////		HC[i] = new char[n - start]; // Ϊ��i���ַ��������ռ�
////		strcpy(HC[i], &cd[start]); // ����õı������ʱ�ռ�cd��ֵ��HC�ĵ�ǰ����
////	} // for
////	delete cd; // �ͷ���ʱ�ռ�
////}
//
//// ���ö����������ʽ��ֵ
//// ���ʽ���Ĵ���
////void InitExpTree()
////{
////	// ���ʽ���Ĵ����㷨
////	InitStack[EXPT]; // ��ʼ��EXPTջ
////	InitStack[OPTR]; // ��ʼ��OPTRջ
////	Push(OPTR, '#'); // �����ʽ��ʼ����#��ѹ��OPTRջ
////	std::cin >> ch; 
////	while (ch != '#' || GetTop(OPTR) != '#') // ���ʽû�в�����ϻ�OPTR��ջ��Ԫ�ز�Ϊ��#��
////	{
////		if (!In(ch)) // ch���������
////		{
////			CreateExpTree(T, NULL, NULL, ch); // ��chΪ������һ��ֻ�и��ڵ�Ķ�����
////			Push(EXPT, T); // �����������ڵ�T��EXPTջ
////			std::cin >> ch; // ������һ���ַ�
////		}
////		else
////			switch (Precede(GetTop(OPTR) , ch)) // �Ƚ�OPTR��ջ��Ԫ�غ�ch�����ȼ�
////			{
////			case '<':
////				Push(OPTR, ch);
////				std::cin >> ch; // ��ǰ�ַ�chѹ��OPTRջ��������һ���ַ�
////				break;
////			case '>':
////				Pop(OPTR, theta); //����OPTRջ���������
////				Pop(EXPT, b); Pop(EXPT, a); // ����EXPTջ��������������
////				CreateExpTree(T, a, b, theta); // ��thetaΪ����aΪ��������bΪ������������һ�ö�����
////				Push(EXPT, T); // �Ƕ��������ڵ�T��EXPTջ
////				break;
////			case '=': // OPTR��ջ��Ԫ���ǡ�������ch�ǡ�����
////				Pop(OPTR, x); // ����OPTRջ���ġ�������������һ���ַ�ch
////				std::cin >> ch;
////				break;
////			} // switch
////	} // while
////}
//
