//#include <iostream>
//#include <vector>
//
//class ArrayStack
//{
//public:
//	/* ��ȡջ�ĳ��� */
//	int size()
//	{
//		return stack.size();
//	}
//
//	/* �ж�ջ�Ƿ�Ϊ�� */
//	bool isEmpty()
//	{
//		return stack.size() == 0;
//	}
//
//	/*��ջ*/
//	void push(int num)
//	{
//		stack.push_back(num);
//	}
//
//	/* ��ջ */
//	int pop()
//	{
//		int num = top();
//		stack.pop_back();
//		return num;
//	}
//
//	/* ����ջ��Ԫ�� */
//	int top()
//	{
//		if (isEmpty()) std::cout << "ջΪ��" << std::end;
//		return stack.back();
//	}
//
//	/* ���� vector */
//	std::vector<int> toVector()
//	{
//		return stack;
//	}
//private:
//	std::vector<int> stack;
//};