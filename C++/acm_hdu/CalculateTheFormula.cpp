//#include<iostream>
//
//const int MAX = 2345;
//����2345���ô���2^31-1�����������scanf��printf����cin��cout��Ȼ��ʱ
//__int64 db[MAX];
//
//using namespace std;
//int main()
//{
//    int n, m, i;
//    db[1] = 1;
//    //��� 
//    for (i = 3; i <= MAX; i += 2)
//    {
//        db[i] = db[i - 2] + i * i;
//    }
//    while (scanf("%d", &n) != EOF)
//    {
//        printf("%I64d\n", db[n]);
//    }
//    return 0;
//}