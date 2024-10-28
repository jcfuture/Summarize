//#include <iostream>
//#include <stack>
//#include <string>
//
//#define CHAR_TO_INT(x) (int)x - 48
//
////class Solution {
////public:
////	int calculate(std::string s) {
////		// �����������ջ
////		// һ��ջ���ڴ洢����
////		// ��һ��ջ���ڴ洢������
////		std::stack<char> sta_char;
////		std::stack<int> sta_int;
////
////		// ����ȡֵ
////		int a = 0, b = 0;
////		
////		// ���ַ�����ÿһλ���б������ÿһλ��ֵ
////		for (int i = 0; i < s.size(); i++)
////		{
////			if(s[i] == ' ') continue;
////			else
////			{
////				if (s[i] >= '0' && s[i] <= '9')
////					sta_int.push(CHAR_TO_INT(s[i]));
////				else
////				{
////					if (sta_char.empty()) sta_char.push(s[i]);
////					else
////					{
////						switch (s[i])
////						{
////						case '+':
////						case '-':
////						{
////							// ��ǰ�ַ����㼶����ڳ˳� ����Ҫ���е�������ջ�еķ��Ž��в��������㣬�󽫲�����ѹ��ջ��
////							switch (sta_char.top())
////							{
////							case '*':
////							{
////								// �ֱ�ȡ��������ջ�е�������ֵ��������Ӧ�ļ����ѹ��ջ��
////								a = sta_int.top();
////								sta_int.pop();
////								b = sta_int.top();
////								sta_int.pop();
////								sta_int.push(b * a);
////								break;
////							}
////							case '/':
////							{
////								a = sta_int.top();
////								sta_int.pop();
////								b = sta_int.top();
////								sta_int.pop();
////								sta_int.push(b / a);
////								break;
////							}
////							}
////							sta_char.push(s[i]);
////							break;
////						}
////						case '*':
////						case '/':
////							// ���ڳ˳����ţ���ֱ�ӽ���ѹ�ط���ջ�м���
////							sta_char.push(s[i]);
////							break;
////						}
////					}
////				}
////			}
////		}
////
////		// ѭ������ջ�е�Ԫ�أ�ֱ��ջΪ��
////		while (!sta_char.empty())
////		{
////			// �ֱ�ȡ��������ջ�е�����ջ��Ԫ��
////			a = sta_int.top();
////			sta_int.pop();
////			b = sta_int.top();
////			sta_int.pop();
////			// ��ȡ��һ������ջ�е�ջ��Ԫ�أ����м��㡣�󽫵õ����ѹ�ز�����ջ��
////			switch (sta_char.top())
////			{
////			case '+': sta_int.push(b + a);
////				break;
////			case '-': sta_int.push(b - a);
////				break;
////			case '*': sta_int.push(b * a);
////				break;
////			case '/': sta_int.push(b / a);
////				break;
////			}
////			// ��Ϊʹ���˲���ջ��ջ��Ԫ�ز�����������Ҫɾ������ջ�е�ջ��Ԫ��
////			sta_char.pop();
////		}
////		// ������ջ�е�ջ��Ԫ�ؼ�Ϊ���ս��
////		int ji = 1 , result = 0;
////		while (!sta_int.empty())
////		{
////			result += (sta_int.top() * ji);
////			ji *= 10;
////			sta_int.pop();
////		}
////
////		return result;
////	}
////};
//
//class Solution {
//public:
//	bool isOp(char c) {
//		return (c == '+' || c == '-' || c == '*' || c == '/');// �ж��ַ��Ƿ�Ϊ������
//	}
//	// ִ����������
//	int compute(int numa, int numb, char op) {
//		switch (op) {
//		case '+':
//			return numa + numb;
//		case '-':
//			return numa - numb;
//		case '*':
//			return numa * numb;
//		case '/':
//			return numa / numb;
//		default:
//			return 0;
//		}
//	}
//	// ��ȡ�����������ȼ�
//	int getPrecedence(char op) {
//		if (op == '+' || op == '-') {
//			return 1;
//		}
//		else if (op == '*' || op == '/') {
//			return 2;
//		}
//		return 0;  // Ĭ�����ȼ�Ϊ0
//	}
//	int calculate(std::string s) {
//		// ������ʽ��ֵ
//		std::stack<int> sta_int;
//		std::stack<char> sta_char;
//
//		for (int i = 0; i < s.size(); i++) {
//			char c = s[i];
//			if (isdigit(c)) {
//				// �����λ����
//				int num = 0;
//				while (isdigit(c)) {
//					num = num * 10 + (c - '0');
//					c = s[++i];
//				}
//				sta_int.push(num);
//			}
//			if (isOp(c)) {
//				// �������ȼ����ڵ��ڵ�ǰ��������ջ��������������������
//				while (!sta_char.empty() && getPrecedence(sta_char.top()) >= getPrecedence(c)) {
//					int operand2 = sta_int.top();
//					sta_int.pop();
//
//					int operand1 = sta_int.top();
//					sta_int.pop();
//
//					char op = sta_char.top();
//					sta_char.pop();
//
//					int result = compute(operand1, operand2, op);
//					sta_int.push(result);
//				}
//				sta_char.push(c);
//			}
//
//			if (c == '(') {
//				sta_char.push(c);
//			}
//
//			if (c == ')') {
//				// ����ջ��������ֱ�����������ţ�����������
//				while (!sta_char.empty() && sta_char.top() != '(') {
//					int operand2 = sta_int.top();
//					sta_int.pop();
//
//					int operand1 = sta_int.top();
//					sta_int.pop();
//
//					char op = sta_char.top();
//					sta_char.pop();
//
//					int result = compute(operand1, operand2, op);
//					sta_int.push(result);
//				}
//				if (!sta_char.empty() && sta_char.top() == '(') {
//					sta_char.pop();  // ����������
//				}
//			}
//		}
//
//		// ִ��ʣ�������
//		while (!sta_char.empty()) {
//			int operand2 = sta_int.top();
//			sta_int.pop();
//
//			int operand1 = sta_int.top();
//			sta_int.pop();
//
//			char op = sta_char.top();
//			sta_char.pop();
//
//			int result = compute(operand1, operand2, op);
//			sta_int.push(result);
//		}
//
//		return sta_int.top();
//
//	}
//};
//
//int main()
//{
//	//std::cout << (int)'0' << std::endl; // 48
//	//std::cout << (int)'9' << std::endl; // 57
//	//std::cout << (int)'+' << std::endl; // 43
//	//std::cout << (int)'-' << std::endl; // 45
//	//std::cout << (int)'*' << std::endl; // 42
//	//std::cout << (int)'/' << std::endl; // 47
//	Solution sol;
//	std::cout << sol.calculate("3+2*2") << std::endl;
//	std::cout << sol.calculate("3/2") << std::endl;
//	std::cout << sol.calculate("3+5/2") << std::endl;
//	std::cout << sol.calculate(" 3 + 5 / 2  ") << std::endl;
//	std::cout << sol.calculate(" 42 ") << std::endl;
//	return 0;
//}