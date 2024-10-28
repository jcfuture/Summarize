//#include "basic.h"
//
//// �ж��Ƿ��н�
//bool isSolution(std::vector<TreeNode*>& state)
//{
//	return !state.empty() && state.back()->val == 7;
//}
//
//// ��¼��
//void recordSolution(std::vector<TreeNode*>& state, std::vector<std::vector<TreeNode*>>& res)
//{
//	res.push_back(state);
//}
//
//// �ж��ڵ�ǰ״̬�£���ѡ���Ƿ�Ϸ�
//bool isValid(std::vector<TreeNode*>& state, TreeNode* choice)
//{
//	return choice != nullptr && choice->val != 3;
//}
//
//// ����״̬
//void makeChoice(std::vector<TreeNode*>& state, TreeNode* choice)
//{
//	state.push_back(choice);
//}
//
//// �ָ�״̬
//void undoChoice(std::vector<TreeNode*>& state, TreeNode* choice)
//{
//	state.pop_back();
//}
//
//// �����㷨:������
//void backtrack(std::vector<TreeNode*>& state, std::vector<TreeNode*>& choices, std::vector<std::vector<TreeNode*>>& res)
//{
//	// ����Ƿ�Ϊ��
//	if (isSolution(state))
//		// ��¼��
//		recordSolution(state, res);
//	// ��������ѡ��
//	for (TreeNode* choice : choices)
//	{
//		// ��֦:���ѡ���Ƿ�Ϸ�
//		if (isValid(state, choice))
//		{
//			// ����: ����ѡ�񣬸���״̬
//			makeChoice(state, choice);
//			// ������һ��ѡ��
//			std::vector<TreeNode*> nextChoices{ choice->left, choice->right };
//			backtrack(state, nextChoices, res);
//			// ����: ����ѡ�񣬻ָ���֮ǰ��״̬
//			undoChoice(state, choice);
//		}
//	}
//}