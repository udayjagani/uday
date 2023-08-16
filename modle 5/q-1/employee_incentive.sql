create database employee_incentive;
use employee_incentive;

create table Employee (
Employee_Id int ,
First_Name varchar(30),
Last_Name varchar(30),
Salary int,
Joinig_Date varchar(30),
Department varchar(30),
primary Key (Employee_Id)
);
create table Employee_backup(
Emp_Id int ,
first_Name varchar(20),
Last_Name varchar(20),
Salary int,
Joinig_Date varchar(20),
Department varchar(20)
);

insert into Employee(Employee_Id , First_Name , Last_Name , Salary , Joinig_Date , Department) 
values
