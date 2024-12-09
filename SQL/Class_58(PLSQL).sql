-- PL/SQL

SQL> set serveroutput on; -- start with this (this is manditory)
SQL> /
////////////
1  BEGIN
  2  DBMS_output.put_line('Welcome to PL/SQL'); -- DBMS_OUTPUT is Package
  3  DBMS_output.put_line('I Am Learning IT');
  4* END;
SQL> /
//////////////////

SQL> ed
Wrote file afiedt.buf

  1  Declare
  2  a int:=5;
  3  b int:=8;
  4  c int:=0;
  5  begin
  6  Dbms_output.put_line('A=' ||A);
  7  Dbms_output.put_line('B=' ||B);
  8* end;
SQL> /
A=5
B=8
/////////////////////////////////
Declare
a int:=&a;
b int:=&b; -- for getting values from user
c int;
begin
Dbms_output.put_line('A=' ||A);
Dbms_output.put_line('B=' ||B);
c:=a+b;
Dbms_output.put_line('Addition is' ||C);
c:=a-b;
Dbms_output.put_line('Substraction is' ||C);
c:=a*b;
Dbms_output.put_line('Multiplication is' ||C);
c:=a/b;
Dbms_output.put_line('Division is' ||C);
c:= mod(a,b);
Dbms_output.put_line('Modulus is' ||C);
end;
/////////////////////////////////
SQL> ed
Wrote file afiedt.buf

  1  Declare
  2  sal number(10,4):= 0;
  3  rsal number(10,4):= 0;
  4  begin
  5  select salary INTO sal from employees where employee_id = &empid;
  6  Dbms_output.put_line('Salary = ' ||sal);
  7  rsal:= sal*80;
  8  sal:= rsal + (rsal*0.15);
  9  Dbms_output.put_line('Salary in out with 15% bonus ' ||sal);
 10* end;
SQL> /
Enter value for empid: 110
old   5: select salary INTO sal from employees where employee_id = &empid;
new   5: select salary INTO sal from employees where employee_id = 110;
Salary = 8200
Salary in out with 15% bonus 754400

PL/SQL procedure successfully completed.

////////////////////////////////////////////////
Declare
sal float:= 0;
rsal float:= 0;
begin
select salary INTO sal from employees where employee_id = &empid;
Dbms_output.put_line('Salary = ' ||sal);
rsal:= sal*80;
sal:= rsal + (rsal*0.15);
Dbms_output.put_line('Salary in out with 15% bonus ' ||sal);
end;
/////////////////////////////////
DECLARE
  a INT := 12;
  b INT := 22;
  c INT;
BEGIN
  c := a * b;
  DBMS_OUTPUT.PUT_LINE('Multiplication is: ' || c);
END;
/

SQL> set serveroutput on;
SQL> /
Multiplication is: 264

PL/SQL procedure successfully completed.
/////////////////////////////////////
