--ʳƷ����  �������ݿ�  foodDB
create database foodDB
go
use foodDB
go


--ʳƷ����  ������  foodType
-- id  ��������  ��ע
create table foodType
(
	id int primary key identity(1,1), 
	typeName varchar(20),
	remark varchar(200)
)

insert into foodType values ('����ʳ','�ó�')
select * from foodType

--ʳƷ��ϸ   ������   food
-- id    ʳƷ����    ��������    �۸�    ���  
create table food (
	id int primary key identity(1,1), 
	foodName varchar(20),
	foodTpyeId int ,
	price varchar(20),
	stock varchar(20)
)
insert into food values ('����',1,6,100)

select * from foodType
select * from food
