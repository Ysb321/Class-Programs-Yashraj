-- procedure to display all employees working in given department

Create or replace procedure sp_dept_display(dn employees.DEPARTMENT_ID%Type)
IS
Cursor c1 is select * from employees where department_id = dn;
emprec c1%rowtype;
cnt NUMBER:=0;
BEGIN
DBMS_OUTPUT.PUT_LINE('Employee Details in Department = ' || dn);
for emprec in c1
LOOP
DBMS_OUTPUT.PUT_LINE(emprec.employee_id || ' ' || emprec.first_name || ' ' || emprec.salary || ' ' || emprec.department_id);
cnt:=c1%rowcount;
END LOOP;
DBMS_OUTPUT.PUT_LINE(cnt || ' row count');
EXCEPTION
When INVALID_CURSOR
THEN
Dbms_output.put_line('Error in cursor operation');
When OTHERS
THEN
Dbms_output.put_line('Error while performing task');
End sp_dept_display;

-- SQL

exec sp_dept_display(80);

--PL/SQL

BEGIN
sp_dept_display(80);
END;

/////////////////////////////

-- Trigger (It will Call at event executed, it will automatically call)
-- --Create a new View Trigger

-- 1) Statement Level Trigger
-- 2) Row Level Trigger

-- Statement Level Trigger

Create Or Replace Trigger Trigger_Name
Before / After DML EVENT
On
Table_Name 
--Declare Section of Trigger
BEGIN
-- Exceptio Section of Trigger
End Trigger_name;

-- Row Level Trigger

Create Or Replace Trigger Trigger_Name
Before / After DML EVENT
For Each Row
On
Table_Name 
--Declare Section of Trigger
BEGIN
-- Exceptio Section of Trigger
End Trigger_name;

//////////////////////////

-- Statement Level Trigger

Create Or replace Trigger TGR_DEMO
BEfore UPDATE
ON
EMPLOYEES
Begin
DBMS_output.put_line('Trigger Fired'); -- Statement level trigger will fire at least one time this statement
End TGR_DEMO;

//////////////////////////

-- Row Level Trigger

Create Or replace Trigger TGR_DEMO
BEfore UPDATE
ON
EMPLOYEES
FOR EACH ROW
Begin
DBMS_output.put_line('Trigger Fired'|| SYSDATE); -- ROW level trigger will fire multiple time this statement
End TGR_DEMO;

////////////////////////////

-- Example

Create Table emprest as select * from employees; -- create a table emprest

Create Or Replace Trigger TGR_EMPrest
Before update or delete or INSERT
on
emprest 
BEGIN
Raise_application_error(-20000, 'you are not allowed to do DML Operation table Read Only ');
End TGR_EMPrest;

SQL> delete emprest;

ORA-20000: you are not allowed to do DML Operation table Read Only

/////////////////////////

-- Drop a Trigger

DROP Trigger trigger_name;
DROP Trigger TGR_EMPrest;

////////////////

Create Or Replace Trigger TGR_EMPrest
Before 
update of salary
on
emprest 
BEGIN
Raise_application_error(-20000, 'you are not allowed to update Salary');
End TGR_EMPrest;

update emprest set salary = 3000;

ORA-20000: you are not allowed to update Salary

///////////////////

