///* ������ṹ */
//struct LinkedList
//{
//    int val; // �ڵ�ֵ
//    LinkedList* next; // �ӽڵ�ָ��
//
//    // ���캯��
//    LinkedList() : val(0), next(nullptr) {}
//    LinkedList(int x) : val(x), next(nullptr) {}
//    LinkedList(int x, LinkedList* next) : val(x), next(next) {}
//};
//
//class MyLinkedList {
//public:
//
//    // ��ʼ������ ����Ĭ�ϵ������Ⱥ�ͷ�ڵ�
//    MyLinkedList() 
//        :length(0), root(new LinkedList())
//    {
//
//    }
//
//    // ��ȡָ��λ�õ�Ԫ��
//    int get(int index) 
//    {
//        // �� index ���������������� -1
//        if (index < 0 || index > (length - 1)) return -1;
//        // ������ʱ�ڵ�ȥ�洢���ڵ����һ���ڵ�
//        LinkedList* temp = root->next;
//        // ѭ�� ������ index λ�ã����ظ�λ���ϵ�ֵ����
//        while (index--) temp = temp->next;
//        return temp->val;
//    }
//
//    // ������ı�ͷ���ͷ�ڵ�
//    void addAtHead(int val) 
//    {
//        // ����һ���½ڵ�
//        LinkedList* newLinked = new LinkedList(val);
//        // ���½ڵ���ӽڵ�ָ����Ϊ���ڵ���ӽڵ�
//        newLinked->next = root->next;
//        // ���½ڵ���ڸ��ڵ������
//        root->next = newLinked;
//        // ���һ���ڵ�󣬵�����ĳ��ȼ� 1
//        length++;
//    }
//
//    // ������Ľ�β��ӽڵ�
//    void addAtTail(int val)
//    {
//        // ����Ҫ������½ڵ�
//        LinkedList* newLinked = new LinkedList(val);
//        // ������ʱ�ڵ�������ҵ���������һ���ڵ�
//        LinkedList* temp = root->next;
//        while (temp->next) temp = temp->next;
//        // �����һ���ڵ���ӽڵ�ָ������Ϊ�²���ڵ�
//        temp->next = newLinked;
//        length++;
//    }
//
//    // ������ index ��λ���ϲ���
//    void addAtIndex(int index, int val)
//    {
//        // ����index��ʱ������±���=0,���൱�ڴ�ͷ���룬����Ҫ����<=
//        if (index <= 0) addAtHead(val); 
//        else if (index == length) addAtTail(val);
//        else if (index > length) return;
//        else {
//            LinkedList* newnode = new LinkedList(val);
//            // ����ָ���ͷָ�뿪ʼ
//            LinkedList* cur = root;
//            while (index--) cur = cur->next;//��������index-1�Ľڵ㣬ѭ��������index�� ���Ǹ���ָ���Ǵ�ͷָ�뿪ʼ�����ǵ�һ���ڵ�
//            newnode->next = cur->next;//����index
//            cur->next = newnode;//����ǰһ��
//            length++;//����+1
//        }
//    }
//
//    void deleteAtIndex(int index)
//    {
//        if (index < 0 || index >= length) return;
//        //��ͷָ�뿪ʼ
//        LinkedList* cur = root;
//        //������index-1��λ��,ѭ��������index��
//        while (index--) 
//            cur = cur->next;
//        //�൱��ֱ�ӿ����index�ڵ�
//        cur->next = cur->next->next;
//        length--;
//    }
//private:
//    int length; // �����洢����ĳ���
//    LinkedList* root; // ������Ϊ���ڵ�
//};
