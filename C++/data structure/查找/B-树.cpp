//#include <iostream>
//
//#define m 3 // B-���Ľף�����Ϊ3
//
//#define OK 1
//#define ERROR -1
//
//#define FALSE -2
//#define TRUE 2
//
//typedef int KeyType;
//typedef int Status;
//
//typedef struct BTNode
//{
//	int keynum; // �ڵ��йؼ��ֵĸ��������ڵ�Ĵ�С
//	struct BTNode* parent; // ָ��˫�׽ڵ�
//	KeyType K[m + 1]; // �ؼ���������0�ŵ�Ԫδ��
//	struct BTNode* ptr[m + 1]; // ����ָ������
//	Record* recptr[m + 1]; // ��¼ָ��������0�ŵ�Ԫδ��
//}BTNode , *BTree;
//
//typedef BTNode Record;
//
//typedef struct
//{
//	BTNode* pt; // ָ���ҵ��Ľڵ�
//	int i; // 1~m���ڽڵ��еĹؼ������
//	int tag; // 1��ʾ���ҳɹ���0��ʾ����ʧ��
//}Result; // B-���Ĳ��ҽ������
//
////Result SearchBTree(BTree T, KeyType key)
////{
////	// ��m��B-��T�ϲ��ҹؼ���key�����ؽ��(pt , i , tag) 
////	// ���ҵ��ɹ���������ֵtag = 1��ָ��pt��ָ�ڵ��е�i���ؼ��ֵ���key
////	// ��������ֵtag = 0������key�Ĺؼ���Ӧ������ָ��pt��ָ�ڵ��е�i���͵�i + 1���ؼ���֮��
////	BTree p = T; // ��ʼ����pָ�����ڵ㣬qָ��p��˫��
////	int found = FALSE, i = 0;
////	while (p && found)
////	{
////		i = Search(p, key); // ��p->K[1..keynum]�в���i���ǵ�p->K[i] <= p->K[i + 1]
////		if (i > 0 && p->K[i] == key) found = TRUE; // �ҵ�����ؼ���
////		else {
////			q = p;
////			p = p->ptr[i]; // ���ҳɹ�
////		}
////		if (found) return (p, i, 1); // ���ҳɹ�
////		else return (q, i ,0); // ���Ҳ��ɹ����򷵻�key�Ĳ���λ����Ϣ 
////	}
////
////}
//
////Status InsertBST(BTree& T, KeyType key, BTree q, int i)
////{
////	// ��m��B-��T�Ͻڵ�*q��K[i]��K[i + 1]֮�����ؼ���key
////	// ������ڵ��������˫�������б�Ҫ�Ľڵ���ѵ�����ʹT����m��B-��
////	int x = key;  // x��ʾ�²���Ĺؼ��֣�apΪһ����ָ��
////	BTree ap = NULL; 
////	int finished = FALSE; 
////	while (q && !finished)
////	{
////		Insert(q, i, x, ap); // ��x��ap�ֱ����q->key[i + 1]��q->ptr[i + 1]
////		if (q->keynum < m) finished = TRUE; // �������
////		else // ���ѽڵ�
////		{
////			s = (m + 1) / 2;  // ��q->K[s+1..m],q->ptr[s..m]��q->recptr[s+1 .. m]�����½ڵ�*ap
////			split(q, s, ap);
////			x = q->K[s];
////
////			q = q->parent;
////			if (q) i = Search(q, x); // ��˫�׽ڵ�*q�в���x�Ĳ���λ��
////		} // else
////	} // while
////	if (!finished) // T�ǿ���������qΪnull�����߸��ڵ��ѷ���Ϊ�ڵ�*q��*ap
////		NewRoot(T, q, x, ap); //���ɺ���Ϣ��T,x,ap�����µĸ��ڵ�*T��ԭT��apΪ����ָ��
////	return OK;
////}