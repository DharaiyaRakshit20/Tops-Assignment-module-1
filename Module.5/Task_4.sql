create database task_4;

use task_4;

create table salesperson
(
SNo int ,
SNAME varchar(50),
CITY varchar(50),
COMM int,
primary key(SNo)
);

create table customer
(
CNM int primary key,
CNAME varchar(50),
CITY varchar(25),
RATING int,
SNo int,
foreign key(SNo) references salesperson(SNo)
);

insert into salesperson(SNo,SNAME,CITY,COMM)
values
(1001,"Peel","London",12),
(1002,"Serres","San Jose",13),
(1004,"Motika","London",11),
(1007,"Rafkin","Barcelona",15),
(1003,"Axelrod","New York",1);

insert into customer(CNM,CNAME,CITY,RATING,SNo)
values
(201,"Hoffman","London",100,1001),
(202,"Giovanne","Roe",200,1003),
(203,"Liu","San Jose",300,1002),
(204,"Gress","Barcelona",100,1002),
(206,"Clemens","London",300,1007),
(207,"Pereira","Roe",100,1004);


select * from customer where SNo>1000;

select SNAME,CITY,COMM from salseperson where CITY='London' and COMM>10;

select * from salseperson where CITY='Barcelona' or CITY='London';

select *from salseperson where CITY in ('Barcelona','London');