//#include <iostream>
//
//typedef enum { ATOM, LIST } ElemTag; // ATOM = 0:ԭ�ӣ�LIST=1���ӱ�
//
//typedef int AtomType;
//
//typedef struct GLNode
//{
//	ElemTag tag; // �������֣���������ԭ�ӽڵ�ͱ�ڵ�
//	union // ԭ�ӽڵ�ͱ�ڵ����������
//	{
//		AtomType tag; // atom��ԭ�ӽڵ��ֵ��AtomType���û�����
//		struct { struct GLNode* hp, * tp; } ptr; // ptr�Ǳ�ڵ��ָ����ptr.hp��ptr.tp�ֱ�ָ���ͷ�ͱ�β
//	};
//}*GList; // ���������
//
//// ������Ⱦ���
////void virus_detction()
////{
////	// ����BF�㷨ʵ�ֲ������
////	std::ifstream inFile("������Ⱦ�����������.txt");
////	std::ofstream outFile("������Ⱦ���������.txt");
////	inFile >> num; // ��ȡ������������
////	while (num--) // ���μ��ÿ�Բ���DNA���˵�DNA�Ƿ�ƥ�� 
////	{
////		inFile >> Virus.ch + 1; // ��ȡ����DNA���У��ַ������±�1��ʼ�洢
////		inFile >> Person.ch + 1; // ��ȡ�˵�DNA����
////		Vir = Virus.ch; // ������DNA��ʱ�ݴ���Vir�У��Ա����
////		flag = 0; // ������ʶ�Ƿ�ƥ�䣬��ʼΪ0��ƥ���Ϊ��0
////		m = Virus.length; // ����DNA���еĳ�����m
////		for (i = m + 1, j = 1; j <= m; j++)
////			Virus.ch[i++] = Virus.ch[j]; // �������ַ����ĳ�������2��
////		Virus.ch[2 * m + 1] = '\0'; // ��ӽ�������
////		for (i = 0; i < m; i++) // ����ȡ��ÿ������Ϊm�Ĳ���DNA��״�ַ���temp
////		{
////			for (j = 1; j < m; j++)
////				temp.ch[j] = Virus.ch[i + j];
////			temp.ch[m + 1] = '\0';  // ��ӽ�������
////			flag = Index_BF(Person, temp, 1); // ģʽƥ��
////			if (flag) break; // ƥ�伴���˳�ѭ��
////		} // for
////		if (flag) outFile << Vir + 1 << "  " << Person.ch + 1 << "  " << "YES" << std::endl;
////		else outFile << Vir + 1 << "  " << Person.ch + 1 << "  " << "NO" << std::endl;
////	} // while
////}