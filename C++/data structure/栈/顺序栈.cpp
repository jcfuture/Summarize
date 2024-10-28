//#include <iostream>
//
//#define MAXSIZE 100 // ˳��ջ�洢�ռ�ĳ�ʼ��������
//#define OK 1
//#define ERROR -1
//
//typedef int SElemType;
//typedef int Status;
//
//typedef struct 
//{
//	SElemType* base; // ջ��ָ��
//	SElemType* top; // ջ��ָ��
//	int stacksize; // ջ���õ��������
//} SqStack;
//
//// ��ʼ��
//Status InitStack(SqStack& S)
//{
//	// ����һ����ջS
//	S.base = new SElemType[MAXSIZE]; // Ϊ˳��ջ��̬����һ���������ΪMAXSIZE������ռ�
//	if (!S.base) exit(OVERFLOW); // �洢����ʧ��
//	S.top = S.base; // top��ʼΪbase����ջ
//	S.stacksize = MAXSIZE; // stacksize ��Ϊջ���������MAXSIZE
//	return OK;
//}
//
//// ��ջ
//Status Push(SqStack& S, SElemType e)
//{
//	// ����Ԫ��eΪ�µ�ջ��Ԫ��
//	if (S.top - S.base == S.stacksize) return ERROR; // ջ��
//	*S.top++ = e; // ��Ԫ��eѹ��ջ����ջ��ָ���1
//	return OK;
//}
//
//// ��ջ
//Status Pop(SqStack& S, SElemType& e)
//{
//	// ɾ��S��ջ��Ԫ�أ���e������ֵ
//	if (S.top == S.base) return ERROR; // ջ��
//	e = *--S.top; // ջ��ָ���1����ջ��Ԫ�ظ���e
//	return OK;
//}
//
//// ȡջ��Ԫ��
//SElemType GetTop(SqStack S)
//{
//	// ����S��ջ��Ԫ�أ����޸�ջ��ָ��
//	if (S.top != S.base) // ջ�ǿ�
//		return *(S.top - 1); //����ջ��Ԫ�ص�ֵ��ջ��ָ�벻��
//}
//
////// ����ת��
////void conversion(int N)
////{
////	// �����κ�һ���Ǹ�ʮ����������ӡ��������ֵ�İ˽�����
////	SqStack S;
////	InitStack(S); // ��ʼ����ջS
////	while (N)
////	{
////		Push(S, N % 8); // ��N��8����õ��İ˽�����ѹ��ջS
////		N /= 8; // N����ΪN��8����
////	}
////	while (!StackEmpty(S)) // ��ջS�ǿ�ʱ��ѭ��
////	{
////		Pop(S, e); // ����ջ��Ԫ��e
////		std::cout << e; // ���e
////	}
////
////}
//
//// ����ƥ��
////Status Matching()
////{
////	// ������ʽ�����������Ƿ���ȷƥ�䣬�����ȷƥ�䣬�򷵻�true�����򷵻�false
////	// ���ʽ�ԡ�#������
////	SqStack S;
////	InitStack(S); // ��ʼ����ջ
////
////	int flag = 1; // ���ƥ�����Կ���ѭ�������ؽ��
////	char ch;
////	std::cin >> ch; // �����һ���ַ�
////	while (ch != '#' && flag) // ������ʽ�ԡ�#����β
////	{
////		switch (ch)
////		{
////		case '[': // ���������ţ�����ѹ��ջ
////		case '(':
////			Push(S, ch);
////			break;
////		case ')': // ���ǡ�����,����ݵ�ǰջ��Ԫ�ص�ֵ���������
////			if (!StackEmpty(S) && GetTop(S) == '(')
////				Pop(S, x); // ��ջ�ǿ���ջ��Ԫ���ǡ�����������ȷƥ��
////			else flag = 0; // ��ջ�ջ�ջ��Ԫ�ز��ǡ������������ƥ��
////			break;
////		case ']': // ���ǡ�]��������ݵ�ǰջ��Ԫ�ص�ֵ���������
////			if (!StackEmpty(S) && GetTop(S) == '[')
////				Pop(S, x); // ��ջ�ǿ���ջ��Ԫ���ǡ�[��������ȷƥ��
////			else flag = 0; // ��ջ�ջ�ջ��Ԫ�ز��ǡ�[���������ƥ��
////			break;
////		} // switch
////		std::cin >> ch; // ��������һ���ַ�
////	} // while
////	if (StackEmpty(S) && flag) return true; // ƥ��ɹ�
////	else return false; // ƥ��ʧ��
////}
//
//// ���ʽ��ֵ
////char EvaluateExpression()
////{
////	// �������ʽ����������㷨����OPTR��OPND�ֱ�Ϊ�����ջ�Ͳ�����ջ
////	SqStack OPND, OPTR;
////	InitStack(OPND); // ��ʼ��OPNDջ
////	InitStack(OPTR); // ��ʼ��OPTRջ
////	Push(OPTR, '#'); //�����ʽ��ʼ����#��ѹ��OPTRջ
////	char ch;
////	std::cin >> ch;
////	while (ch != '#' || GetTop(OPTR) != '#') // ���ʽû�в�����ϻ�OPTR��ջ��Ԫ�ز�λ��#��
////	{
////		if (!In(ch)) // ch������������OPNDջ
////		{
////			Push(OPND, ch);
////			std::cin >> ch;
////		}
////		else
////		{
////			switch (Precede(GetTop(OPTR) , ch)) // �Ƚ�OPTR��ջ��Ԫ�غ�ch�����ȼ�
////			{
////			case '<' :
////				Push(OPTR, ch); // ��ǰ�ַ�chѹ��OPTRջ��������һ���ַ�ch
////				std::cin >> ch;
////				break;
////			case '>':
////				Pop(OPTR, theta); // ����OPTRջ���������
////				Pop(OPND, b); //����OPNDջ��������������
////				Pop(OPND, a);
////				Push(OPND, Operate(a, theta, b)); //��������ѹ��OPNDջ
////				break;
////			case '=': // OPTR��ջ��Ԫ���ǡ�(����ch�ǡ�����
////				Pop(OPTR, x); // ����OPTRջ���ġ�������������һ���ַ�ch
////				std::cin >> ch;
////				break;
////			} // switch
////		}
////	} // while
////	return GetTop(OPND); // OPNDջ��Ԫ�ؼ����ʽ��ֵ���
////}