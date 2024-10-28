package mySet1;

import java.util.Comparator;
import java.util.TreeSet;

import mySet.Student;

/*
    �洢ѧ�����󲢱���������TreeSet����ʹ�ô��ι��췽��
    TreeSet(Comparator comparator) ������ָ���ıȽ�����������
    Ҫ�󣺰��������С��������������ͬʱ��������������ĸ˳������
    
    new TreeSet<Student>(arg0): arg0 ����ʹ��һ�������ڲ���ķ�ʽ�½�һ��Comparator�ӿڵ�ʵ����
 */
public class TreeSetDemo03 {
    public static void main(String[] args) {
      //�������϶���
        TreeSet<Student> ts = new TreeSet<Student>(new Comparator<Student>() {
        	//�������ڲ����У���дcompare����
        	public int compare(Student s1, Student s2) {
        		// TODO Auto-generated method stub
        		//���������С���������������У�
        		//this   -   s
        		// s1    -   s2
        		int num = s1.getAge() - s2.getAge();
        		//������ͬʱ��������������ĸ˳������
        		int num2 = num == 0 ? s1.getName().compareTo(s2.getName()):num;
        		return num2;
        	}
		});
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
