//#include "basic.h"
//
//int main1()
//{
//	// ��ʼ����ϣ��
//	std::unordered_map<int, std::string> map;
//
//	// ��Ӳ���
//	// �ڹ�ϣ������Ӽ�ֵ�� ��key, value��
//	map[12836] = " С��";
//	map[15937] = " С��";
//	map[16750] = " С��";
//	map[13276] = " Сӯ";
//	map[10583] = " С��";
//
//	// ��ѯ����
//	// ���ϣ��������� key�� �õ�ֵ value
//	std::string name = map[15937];
//
//	// ɾ������
//	// �ڹ�ϣ����ɾ����ֵ�ԣ�key, value��
//	map.erase(10583);
//
//	// ������ϣ��
//	// ������ֵ�� key -> value
//	for (auto key : map)
//	{
//		std::cout << key.first << " -> " << key.second << std::endl;
//	}
//
//	// ʹ�õ��������� key -> value
//	for (auto iter = map.begin(); iter != map.end(); iter++)
//	{
//		std::cout << iter->first << " -> " << iter->second << std::endl;
//	}
//	return 0;
//}