//#include <iostream>
//
//typedef struct
//{
//	char name[20]; // ����
//	char sex; // �Ա�F��ʾŮ�ԣ�M��ʾ����
//}Person;
//
//#define MAXQSIZE 100 // ���п��ܴﵽ����󳤶�
//typedef struct
//{
//	Person* base; // ����������Ԫ������ΪPerson
//	int front; //ͷָ��
//	int rear; //βָ��
//}SqQueue;
//
//SqQueue Mdancers, Fdancers; // �ֱ�洢��ʿ��Ůʿ����߶���
//
////void DancePartner(Person dancer[], int num)
////{
////	// �������dancer�д���������Ů������num�����������
////	InitQueue(Mdancers); // ��ʿ���г�ʼ��
////	InitQueue(Fdancers); // Ůʿ���г�ʼ��
////	for (int i = 0; i < num; i++) // ���ν������߸������Ա����
////	{
////		Person p = dancer[i]; 
////		if (p.sex == 'F') EnQueue(Fdancers, p); // ����Ů��
////		else EnQueue(Mdancers, p); // �����ж�
////	}
////	std::cout << "The dancing partners are : \n";
////	while (!QueueEmpty(Fdancers) && !QueueEmpty(Mdancers))
////	{
////		// ���������Ů��������
////		DeQueue(Fdancers, p); // Ůʿ����
////		std::cout << p.name << " "; // �������Ůʿ����
////		DeQueue(Mdancers, p); // ��ʿ����
////		std::cout << p.name << " "; // ���������ʿ����
////	}
////	if (!QueueEmpty(Fdancers)) // Ůʿ���зǿգ������ͷŮʿ������
////	{
////		p = GetHead(Fdancers); // ȡŮʿ��ͷ
////		std::cout << "The first woman to get a partner is :" << p.name << std::endl;
////	}
////	else if (!QueueEmpty(Mdancers)) // ��ʿ���зǿգ������ͷ��ʿ������
////	{
////		p = GetHead(Fdancers); // ȡ��ʿ��ͷ
////		std::cout << "The first man to get a partner is :" << p.name << std::endl;
////	}
////}