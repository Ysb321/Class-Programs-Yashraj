/*

Create Or Replace Function function_Name(Parameter1, datatype......) (code can replace with new one but not rights)
Return datatype
is/AS

--Declaration Section
BEGIN

--Exception
--Runtime Error Section
END function_Name;

*/

create or replace function fn_add(n1 number, n2 number)
Return NUMBER
is
c Number:=0;
BEGIN
C:= n1 + n2;
return c;
EXCEPTION
When OTHERS
THEN
dbms_output.put_line('Error in function');
END fn_add;
/

-- IN SQL

select fn_add(6,3) from dual;


////////////////////////

-- IN PL/SQL

DECLARE
a Number:= &a;
b Number:= &b;
c Number:= 0;

BEGIN

DBMS_output.put_line('Addition = ' || fn_add(a,b));
END;

///////////////

Create or replace function fn_raise(empno Number)
Return Number
is 
Sal employees.salary%Type;
BEGIN
SELECT Salary into Sal from EMPLOYEES where employee_id = empno;
Sal := Sal + Sal * .10;
Return Sal;
EXCEPTION
When Others
then
DBMS_output.put_line('Error While Processing.');
END fn_raise;

////////////////////////

-- In SQL

select employee_id, first_name, salary, fn_raise(employee_id) TotalSal From employees;

//////////////////////

-- In PL/SQL

Declare
empn Number:=&empno;
Begin
DBMS_output.put_line('Total = ' || fn_raise(empn));
END;

////////////////