//#include <iostream> 
//#include <string>
//#include <set>
//
//int main()
//{
//	std::string str, str1;   //str�������룬str1��������ַ��� 
//	std::set<std::string> sets;    //���ʱ�  
//	while (getline(std::cin, str) && str[0] != '#')  //���� 
//	{
//		sets.clear();
//		for (int i = 0; i < str.size(); i++)
//		{
//			if (str[i] == ' ')  //����һ�����ʵ�ĩβ 
//			{
//				if (str1 != "")
//					sets.insert(str1);
//				str1 = "";
//			}
//			else                  //����ȡ�����ַ������ַ���str1�� 
//			{
//				str1 += str[i];
//			}
//		}
//		//�洢���� 
//		if (str1 != "")
//		{
//			sets.insert(str1);
//			str1 = "";
//		}
//		std::cout << sets.size() << std::endl;//������ 
//	}
//
//	return 0;
//}