package mySet;

import java.util.TreeSet;


/*
    �洢ѧ�����󲢱�������������ʹ���޲ι��췽��
    Ҫ�󣺰��������С��������������ͬʱ��������������ĸ˳������
 */
public class TreeSetDemo02 {
    public static void main(String[] args) {
        //�������϶���
       TreeSet<Student> ts = new TreeSet<Student>();

        //����ѧ������
		Student s1 = new Student("zhoujielun",33);
		Student s2 = new Student("chenyixun",32);
		Student s3 = new Student("zhangxueyou",41);
		Student s4 = new Student("caixukun",32);

        //��ѧ����ӵ�����
        ts.add(s1);
        ts.add(s2);
        ts.add(s3);
        ts.add(s4);

        //��������
        for(Student stu : ts){
        	System.out.println(stu.getName() + ", " + stu.getAge());//java.lang.ClassCastException
        }
    }
}
