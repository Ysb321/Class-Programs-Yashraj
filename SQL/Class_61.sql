/*

Exception In PL/SQL

ZERO_DIVIDE
NO-DATA_FOUND
DUP_VAL_ON_INDEX
TOO_MANY_ROWS
CASE_NOT_FOUND
INVALID_CURSOR
CURSOR_ALREADY_OPEN
OTHERS.

*/

-- ZERO_DIVIDE (If we divide any number by zero it show error that error handle by exception )

DECLARE
a number:=&a;
b number:=&b;
c number:=&c;
BEGIN
c:=a/b;
dbms_output.put_line('a = '||a);
dbms_output.put_line('b = '||b);
dbms_output.put_line('Division = '||c);
Exception
When ZERO_DIVIDE
THEN
dbms_output.put_line('cannot divide by number by zero'); -- This line print if we divide any number by zero
WHEN OTHERS
THEN
dbms_output.put_line('Other Exception Occurs');
End;
/
//////////////////

-- NO-DATA_FOUND (if there is no same data found in column then it will show error)

DECLARE
sal employees.salary%type;
BEGIN
select salary into sal from employees where employee_id = 700;
DBMS_output.put_line('Salary = ' ||sal);
EXCEPTION
WHEN NO_DATA_FOUND
THEN
DBMS_output.put_line('No Record Found'); -- this line print if that record not found
When ZERO_DIVIDE
THEN
dbms_output.put_line('cannot divide by number by zero'); 
WHEN OTHERS
THEN
dbms_output.put_line('Other Exception Occurs');
END;
//////////////////////

-- TOO_MANY_ROWS

DECLARE
sal employees.salary%type;
BEGIN
select salary into sal from employees where department_id = 80; -- inserting to many records into sal variable
DBMS_output.put_line('Salary = ' ||sal);
EXCEPTION
WHEN NO_DATA_FOUND
THEN
DBMS_output.put_line('No Record Found');
WHEN TOO_MANY_ROWS
THEN
DBMS_output.put_line('There are too many rows'); -- this line print bcoz there are too many rows at department_id is 80 so it cant put in sal
When ZERO_DIVIDE
THEN
dbms_output.put_line('cannot divide by number by zero'); 
WHEN OTHERS
THEN
dbms_output.put_line('Other Exception Occurs');
END;

//////////////

-- DUP_VAL_ON_INDEX (When  table have primary key or unique key inside it then duplicate row can't be insert)

BEGIN 
INSERT INTO E
VALUes (1, 'Ajay'); -- duplicate record
EXCEPTION
WHEN DUP_VAL_ON_INDEX
then
dbms_output.put_line('Can not insert duplicate records'); 
END;
/

//////////////////////
-- WHEN MEMORY AREA ALLOCATED FOR SQL QUERY or EXUCUTED QUERY THAT IS KNOWN AS CURSOR.
--IMPLICIT CURSOR ATTRIBUTS

SQL%ISOPEN -- (IT is always false for implicit cursor)
SQL%ROWCOUNT -- (Number of rows)
SQL%NOTFOUND -- (IF data not found then it will true and exit from cursor)
SQL%FOUND -- (It will Search data until found then it show true)
