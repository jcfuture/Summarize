#pragma once
#include <string>
#define MAXSIZE 20 // ˳������󳤶�

typedef int KeyType;// ����ؼ�������Ϊ����
typedef std::string InfoType;

typedef struct
{
	KeyType key; // �ؼ�����
	InfoType otherinfo; // ����������
}RedType; // ��¼����

typedef struct
{
	RedType r[MAXSIZE + 1]; // r[0]���û������ڱ���Ԫ
	int length; // ˳�����
}SqList; // ˳�������