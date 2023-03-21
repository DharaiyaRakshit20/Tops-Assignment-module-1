create database task_3;
drop database task_3;
use task_3;

create table employee
(
Employee_id int auto_increment,
First_name varchar(50),
Last_name varchar(50),
Salary int,
Joining_Date datetime,
Department varchar(25),
primary key(Employee_id)
);

create table employee_backup
(
Employee_id int ,
First_name varchar(50),
Last_name varchar(50),
Salary int,
Joining_Date datetime,
Department varchar(25)
);

create table Incentive
(
Employee_rf_id int ,
Incentive_date date,
Incentive_amount int,
foreign key(Employee_rf_id) references employee(Employee_id)
);
insert into employee(First_name,Last_name,Salary,Joining_date,Department)
values
("John","Abraham",1000000,'01-01-13 12:00:00 ',"Banking"),
("Michael","Clarke",800000,'01-01-13 12:00:00',"Insurance"),
("Roy","Thomas",700000,'01-2-13 12:00:00',"Banking"),
("Tom","Jose",600000,'01-2-13 12:00:00',"Insurance"),
("Jerry","Pinto",650000,'01-2-13 12:00:00',"Insurance"),
("Philip","Mathew",750000,'01-01-13 12:00:00',"Services"),
("TestName1","123  ",650000,'01-01-13 12:00:00',"Services"),
("TestName2","Lname%",600000,'01-02-13 12:00:00',"Insurance");

insert into Incentive(Employee_rf_id,Incentive_date,Incentive_amount)
values
(1,'01-02-13',5000),
(2,'01-02-13',3000),
(3,'01-02-13',4000),
(1,'01-01-13',4500),
(2,'01-01-13',3500);

select First_name,Joining_date,Salary from employee;

select First_name,Salary from employee order by Salary desc;

select* from employee where First_name like 'J%';

select First_name,Salary from employee order by Salary asc;

select employee.First_name,Incentive.Incentive_amount from employee inner join incentive on Employee_id=Employee_rf_id where Incentive_amount>3000;