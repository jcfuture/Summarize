//#include <iostream>
//
///* �������ڵ�ṹ�� */
//struct TreeNode
//{
//	int val; // �ڵ�ֵ
//	TreeNode* left; // ���ӽڵ�ָ��
//	TreeNode* right; // ���ӽڵ�ָ��
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
//
//int main()
//{
//	/* ��ʼ�������� */
//	// ��ʼ���ڵ�
//	TreeNode* n1 = new TreeNode(1);
//	TreeNode* n2 = new TreeNode(2);
//	TreeNode* n3 = new TreeNode(3);
//	TreeNode* n4 = new TreeNode(4);
//	TreeNode* n5 = new TreeNode(5);
//	// �����ڵ�֮������ã�ָ�룩
//	n1->left = n2;
//	n1->right = n3;
//	n2->left = n4;
//	n2->right = n5;
//
//	/* ������ɾ���ڵ� */
//	TreeNode* P = new TreeNode(0);
//	// �� n1 -> n2 �м����ڵ� P
//	n1->left = P;
//	P->left = n2;
//	// ɾ���ڵ� P
//	n1->left = n2;
//	return 0;
//}