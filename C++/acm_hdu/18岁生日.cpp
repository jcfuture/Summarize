//#include <iostream>
//
//int inRun(int year)  //�ж����� 
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int T;
//	std::cin >> T;
//	while (T--)
//	{
//		int year, month, day, days;
//		char temp;
//		std::cin >> year >> temp >> month >> temp >> day;
//		if (month == 2 && day == 29)  //2.29 һ��û��18������ 
//		{
//			std::cout << "-1" << std::endl;
//			continue;
//		}
//		days = 0;
//
//		for (int i = year; i < year + 18; ++i)  //�ӳ�����һ�굽18��ǰһ��������� 
//		{
//			if (inRun(i))
//				days += 366;
//			else
//				days += 365;
//		}
//
//		if (inRun(year) && month >= 3)   //������һ�� ���ڶ�����Ϊ���꣨������һ�죩Ҫ ��һ 
//			days--;
//
//		year += 18;
//		if (inRun(year) && month >= 3)  //ʮ������һ��  С�ڵ���2����Ϊ���꣨������һ�죩 ��Ҫ��һ 
//			days++;
//		std::cout << days << std::endl;
//	}
//	return 0;
//}