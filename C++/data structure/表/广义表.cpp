//#include <iostream>
//
//typedef enum { ATOM, LIST } ElemTag; // ATOM = 0:原子，LIST=1：子表
//
//typedef int AtomType;
//
//typedef struct GLNode
//{
//	ElemTag tag; // 公共部分，用于区分原子节点和表节点
//	union // 原子节点和表节点的连个部分
//	{
//		AtomType tag; // atom是原子节点的值域，AtomType由用户定义
//		struct { struct GLNode* hp, * tp; } ptr; // ptr是表节点的指针域，ptr.hp和ptr.tp分别指向表头和表尾
//	};
//}*GList; // 广义表类型
//
//// 病毒感染检测
////void virus_detction()
////{
////	// 利用BF算法实现病毒检测
////	std::ifstream inFile("病毒感染检测输入数据.txt");
////	std::ofstream outFile("病毒感染检测输出结果.txt");
////	inFile >> num; // 读取待检测的任务数
////	while (num--) // 依次检测每对病毒DNA和人的DNA是否匹配 
////	{
////		inFile >> Virus.ch + 1; // 读取病毒DNA序列，字符串从下标1开始存储
////		inFile >> Person.ch + 1; // 读取人的DNA序列
////		Vir = Virus.ch; // 将病毒DNA临时暂存在Vir中，以备输出
////		flag = 0; // 用来标识是否匹配，初始为0，匹配后为非0
////		m = Virus.length; // 病毒DNA序列的长度是m
////		for (i = m + 1, j = 1; j <= m; j++)
////			Virus.ch[i++] = Virus.ch[j]; // 将病毒字符串的长度扩大2倍
////		Virus.ch[2 * m + 1] = '\0'; // 添加结束符号
////		for (i = 0; i < m; i++) // 依次取得每个长度为m的病毒DNA环状字符串temp
////		{
////			for (j = 1; j < m; j++)
////				temp.ch[j] = Virus.ch[i + j];
////			temp.ch[m + 1] = '\0';  // 添加结束符号
////			flag = Index_BF(Person, temp, 1); // 模式匹配
////			if (flag) break; // 匹配即可退出循环
////		} // for
////		if (flag) outFile << Vir + 1 << "  " << Person.ch + 1 << "  " << "YES" << std::endl;
////		else outFile << Vir + 1 << "  " << Person.ch + 1 << "  " << "NO" << std::endl;
////	} // while
////}