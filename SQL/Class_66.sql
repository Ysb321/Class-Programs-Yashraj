-- Instead of Trigger

create table depart1(deptID INT Primary Key, DeptName Varchar2(20));

create table employ1(EmpID INT primary key, EmpName varchar(25), DeptID INT);

create view empdeptv as select e.empid, e.empname, e.deptid, d.deptName from employ1 e, depart1 d where e.deptId = d.deptId;

create or replace Trigger TGR_int_view
Instead of Insert
ON
empdeptv
for Each ROw
Begin
Insert Into Depart1 values(:new.deptid, :new.deptName);
Insert Into employ1 values(:new.empid, :new.empname, :new.deptid);
End TGR_int_view;

Insert Into empdeptv values(100, 'Ajay', 80, 'Accounting');