//#include <iostream>
//#include <string>
//
//int main()
//{
//	char c = 'a';
//	//
//	std::cout << " һ��ָ�룬δ�޸�ֵ" << std::endl;
//	char* add = &c;
//
//	std::cout << *add << std::endl;
//
//	// һ��ָ�� �޸�ֵ
//	*add = 'b';
//
//	std::cout << *add << std::endl;
//
//	std::cout << "����ָ��" << std::endl;
//	// ����ָ��
//	char** sc = &add;
//	std::cout << **sc << std::endl;
//
//	**sc = 'c';
//
//	std::cout << **sc << std::endl;
//
//	std::cout << "����ָ��" << std::endl;
//	// ����ָ��
//	char*** scs = &sc;
//
//	std::cout << ***scs << std::endl;
//
//	***scs = 'd';
//
//	//std::cout << *scs << std::endl;
//	//std::cout << **scs << std::endl;
//	std::cout << ***scs << std::endl;
//
//	std::cout << "�Ĳ�ָ��" << std::endl;
//	// �Ĳ�ָ��
//	char**** scsc = &scs;
//
//	std::cout << ****scsc << std::endl;
//
//	****scsc = 'e';
//
//	std::cout << ****scsc << std::endl;
//
//	std::cout << "���ָ��" << std::endl;
//	// ���ָ��
//	char***** scscs = &scsc;
//
//	std::cout << *****scscs << std::endl;
//
//	*****scscs = 'f';
//
//	std::cout << *****scscs << std::endl;
//
//	std::cout << " ����ָ��" << std::endl;
//	// ����ָ��
//	char****** scscsc = &scscs;
//
//	std::cout << ******scscsc << std::endl;
//
//	******scscsc = 'g';
//
//	std::cout << ******scscsc << std::endl;
//
//	std::cout << "�߲�ָ��" << std::endl;
//	// �߲�ָ��
//	char******* scscscs = &scscsc;
//
//	std::cout << *******scscscs << std::endl;
//
//	*******scscscs = 'h';
//
//	std::cout << *******scscscs << std::endl;
//
//	std::cout << "�˲�ָ��" << std::endl;
//	// �˲�ָ��
//	char******** scscscsc = &scscscs;
//
//	std::cout << ********scscscsc << std::endl;
//
//	********scscscsc = 'i';
//
//	std::cout << ********scscscsc << std::endl;
//
//	std::cout << "����޸ĺ��һ��ָ��" << std::endl;
//
//	std::cout << *add << std::endl;
//}

#include <iostream>
#include <memory>

//int main1()
//{
//	std::unique_ptr<int> ptr1 = std::make_unique<int>();
//	std::cin.get();
//}