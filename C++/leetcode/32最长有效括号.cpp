//#include <string>
//#include <vector>
//#include <algorithm>
//
//class Solution {
//public:
//	int longestValidParentheses(std::string s) {
//		int num = s.size();
//		int ans = 0;
//		int start = -1;
//		std::vector<int> stack;      //��š�(�����±�
//		for (int i = 0; i < num; i++) {
//			if (s[i] == '(') {  //����'('
//				stack.push_back(i);     //�±���ջ
//			}
//			else {               //����')'
//				if (stack.empty()) {
//					//ջ�գ���ʱ��Ϊs[i]�ǡ�)������ǰ��û��ʣ��ġ�(����֮ƥ��
//					//����ǰ����Ӵ����ٿ����������ƴ�ӳɸ�����Ӵ�
//					//����ֱ�Ӹ��� start = i �ض�ǰ����Ӵ����������Ӵ����start��ʼ
//					start = i;
//				}
//				else {
//					//ջ���գ����С�(����֮ƥ�䣬�Ƚ����ջ
//					stack.pop_back();
//					//��ʱ��Ҫ���Ǹô��Ѿ�ƥ�������ǰ���Ƿ��С�(��δƥ��
//					if (stack.empty()) {
//						//ջ�գ�˵����start֮��(������start)�����ž������
//						//ȡ��ǰ�Ӵ����� i - start ������ans�Ƚϣ�ȡ���ֵ
//						ans = std::max(i - start, ans);
//					}
//					else {
//						//ջ���գ�˵����start֮���С�(���ȴ����
//						//��ʱջ���ġ�(����Ϊ�����δƥ�����ţ��±��Ϊj
//						//��� j + 1 ��ʼȡ�õ�ǰ��Ӵ����� i - j��
//						//��������ans�Ƚϣ�ȡ���ֵ
//						ans = std::max(i - stack.back(), ans);
//					}
//				}
//			}
//		}
//
//		return ans;
//	}
//};