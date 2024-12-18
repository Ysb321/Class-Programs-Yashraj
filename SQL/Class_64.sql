-- Procedure in PL/SQL (Return any value is not possible in procedure but we can use only return)
Create Or Replace procedure sp_add(n1 Number, n2 Number)
is
C Number:=0;
BEGIN
C:= n1 + n2;
DBMS_OUTPUT.put_line('First Number = '|| n1);
DBMS_OUTPUT.put_line('Second Number = '|| n2);
DBMS_OUTPUT.put_line('Addition = '|| c);
EXCEPTION
When OTHERS
THEN
DBMS_OUTPUT.put_line('Error WHile Executing procedure');
END SP_Add;
/

-- SQL 
Exec sp_add(12, 22);

--PL/SQL

BEGIN
sp_add(12,22);
END;
/
//////////////////////
--Procedure to display all employees in given department

Create or replace procedure sp_display(d in employees.department_id%Type)
IS
Cursor c1 is Select * From employees where department_id = d;
emprec c1%Rowtype;
BEGIN
Open c1;
Fetch c1 into emprec;
while c1%found
LOOP
DBMS_OUTPUT.PUT_LINE(emprec.employee_id || ' ' || emprec.first_name|| ' ' || emprec.salary);
Fetch c1 into emprec;
END LOOP;
DBMS_OUTPUT.PUT_LINE(c1%ROwCount || ' Row Selected');
EXCEPTION
When OTHERS
THEN
DBMS_OUTPUT.PUT_LINE('Error at Run Time');
END sp_display;
/

--SQL
EXEC sp_display(80);

--PL/SQL

BEGIN
sp_display(80);
END;
/

///////////////////////

CREATE OR REPLACE PROCEDURE sp_insert_dept(deptn departments.DEPARTMENT_ID%Type, dn DEPARTMENTS.DEPARTMENT_NAME%Type, lc DEPARTMENTS.LOCATION_ID%type)
IS
Begin
Insert into DEPARTMENTS(DEPARTMENT_ID, DEPARTMENT_NAME, LOCATION_ID) values (deptn, dn, lc);
DBMS_output.put_line(SQL%RowCount || ' Row Inserted');
EXCEPTION
WHEN
DUP_VAL_ON_INDEX
THEN
DBMS_OUTPUT.PUT_LINE('Primary key Voileted');
End sp_insert_dept;
/

--SQL
EXEC sp_insert_dept(12, 'asdd', 123);

--PL/SQL
BEGIN
sp_insert_dept(12, 'asdd', 123);
END;
/

///////////////////////