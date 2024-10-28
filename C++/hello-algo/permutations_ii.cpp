//#include "basic.h"
//
//// �����㷨��ȫ���� II
//void backtrack(std::vector<int>& state, const std::vector<int>& choices, std::vector<bool>& selected,
//	std::vector<std::vector<int>>& res)
//{
//	// ��״̬���ȵ���Ԫ������ʱ����¼��
//	if (state.size() == choices.size())
//	{
//		res.push_back(state);
//		return;
//	}
//	// ��������ѡ��
//	std::unordered_set<int> duplicated;
//	for (int i = 0; i < choices.size(); i++)
//	{
//		int choice = choices[i];
//		// ��֦���������ض�ѡ��Ԫ�� �� �������ظ�ѡ�����Ԫ��
//		if (!selected[i] && duplicated.find(choice) == duplicated.end())
//		{
//			// ���ԣ�����ѡ�񣬸���״̬
//			duplicated.emplace(choice); // ��¼ѡ�����Ԫ��ֵ
//			selected[i] = true;
//			state.push_back(choice);
//			// ������һ��ѡ��
//			backtrack(state, choices, selected, res);
//			// ���ˣ�����ѡ�񣬻ָ���֮ǰ��״̬
//			selected[i] = false;
//			state.pop_back();
//		}
//	}
//}
//
//// ȫ���� II
//std::vector<std::vector<int>> permutationsII(std::vector<int> nums)
//{
//	std::vector<int> state;
//	std::vector<bool> selected(nums.size(), false);
//	std::vector<std::vector<int>> res;
//	backtrack(state, nums, selected, res);
//	return res;
//}