create database Task_1;

use Task_1;

create table student
(
Rollno int auto_increment primary key,
Student_Name varchar(50),
Branch varchar(20)
);

create table exam
(
Rollno int,
S_code varchar(20),
Marks int,
P_code varchar(20),
foreign key(Rollno) references student(Rollno)
);

insert into student(Student_Name,Branch)
values
("Jay","Computer Science"),
("Suhani","Electronic and Com."),
("Kriti","Electronic and Com.");

insert into exam(Rollno,S_code,Marks,P_code)
values 
(1,"CS11",50,"CS"),
(1,"CS12",60,"CS"),
(2,"EC101",66,"EC"),
(2,"EC102",70,"EC"),
(3,"EC101",45,"EC"),
(3,"EC102",50,"EC");
(1,"CS11",50,"CS"),
(1,"CS11",50,"CS"),
(1,"CS11",50,"CS"),