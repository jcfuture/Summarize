--�������ݿ�
create database R2007_01;
go
--ʹ�����ݿ�
use R2007_01;
go
--������
create table users(
	id int primary key identity(1,1),
	userName varchar(20),
	userPwd varchar(20),
	nickName varchar(20),
	age int
)
--����в�������
insert into users values ('wpf','wpf123','������',18);
--��ѯ���ȫ����
select * from users



