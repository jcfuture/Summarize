//#include "basic.h"
//
//class PTIIICompact
//{
//public:
//	// ǰ�����:������
//	void preOrder(TreeNode* root)
//	{
//		// ��֦
//		if (root == nullptr || root->val == 3) return;
//		// ����
//		path.push_back(root);
//		if (root->val == 7)
//			// ��¼��
//			res.push_back(root);
//		preOrder(root->left);
//		preOrder(root->right);
//		// ����
//		path.pop_back();
//	}
//
//private:
//	std::vector<TreeNode*> res, path;
//};