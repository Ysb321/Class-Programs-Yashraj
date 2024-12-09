/*
Case Statement in PL/SQL

1.Searched CASE

case variable
when value
THEN
--statements
when VALUE
THEN
--statements
when VALUE
--statements
ELSE
--statements
END CASE;

2.Condition CASE

CASE
WHEN CONDITION
THEN
--statements
WHEN CONDITION
THEN
--statements
WHEN CONDITION
THEN
--statements
ELSE
--statements
END CASE;

*/
--1.Searched CASE
DECLARE
d number:= &DayNumber;
Begin
Case d
when 1
Then
DBMS_OUTPUT.PUT_LINE('Day is Sunday');
when 2
Then
DBMS_OUTPUT.PUT_LINE('Day is Monday');
when 3
Then
DBMS_OUTPUT.PUT_LINE('Day is Tueday');
when 4
Then
DBMS_OUTPUT.PUT_LINE('Day is Wednesday');
when 5
Then
DBMS_OUTPUT.PUT_LINE('Day is Thusday');
when 6
Then
DBMS_OUTPUT.PUT_LINE('Day is Friday');
when 7
Then
DBMS_OUTPUT.PUT_LINE('Day is Saturday');
ELSE
DBMS_OUTPUT.PUT_LINE('Day is Invalid');
END CASE;
END;
/
////////////////
-- 2.Condition CASE
DECLARE
d number:= &DayNumber;
Begin
Case 
when d=1
Then
DBMS_OUTPUT.PUT_LINE('Day is Sunday');
when d=2
Then
DBMS_OUTPUT.PUT_LINE('Day is Monday');
when d=3
Then
DBMS_OUTPUT.PUT_LINE('Day is Tueday');
when d=4
Then
DBMS_OUTPUT.PUT_LINE('Day is Wednesday');
when d=5
Then
DBMS_OUTPUT.PUT_LINE('Day is Thusday');
when d=6
Then
DBMS_OUTPUT.PUT_LINE('Day is Friday');
when d=7
Then
DBMS_OUTPUT.PUT_LINE('Day is Saturday');
ELSE
DBMS_OUTPUT.PUT_LINE('Day is Invalid');
END CASE;
END;
/
//////////////////

DECLARE
Sal employees.salary%Type;
Begin
select salary INTO sal from employees where employee_id = &empno;
Case
when SAL >= 1 AND SAL <=10000
Then
DBMS_OUTPUT.PUT_LINE('Salary is Between 1 to 10000');
when SAL >= 10001 AND SAL <=12000
Then
DBMS_OUTPUT.PUT_LINE('Salary is Between 10001 to 12000');
when SAL >= 12001 AND SAL <=20000
Then
DBMS_OUTPUT.PUT_LINE('Salary is Between 12001 to 20000');
ELSE
DBMS_OUTPUT.PUT_LINE('Salary not between 1 to 20000');
END CASE;
END;
/
select salary from employees where employee_id = 102
/////////////////
-- Basic Loop
Declare
N NUmber:=1;
Begin
DBMS_output.put_line('Base loop in PL/SQL to show 1 to 10 Numbers');
Loop
DBMS_output.put_line(N);
N:=N+1;
Exit When N>10;
End Loop;
End;
/
/////////////////
Declare
N Number:=1;
Total Number:=0;
Avg1 Number(5,2):=0;
Begin
DBMS_output.put_line('Base loop in PL/SQL to show 1 to 10 Numbers');
Loop
DBMS_output.put_line(N);
Total:=Total+N;
N:=N+1;
Exit When N>10;
End Loop;
DBMS_output.put_line('Total = '||Total);
Avg1:= Total/10.0;
DBMS_output.put_line('Average = '||Avg1);
End;
/
/////////////////
--While Loop
Declare
N Number:=1;
Total Number:=0;
Avg1 Number(5,2):=0;
Begin
DBMS_output.put_line('Base loop in PL/SQL to show 1 to 10 Numbers');
While N <= 10
Loop
DBMS_output.put_line(N);
Total:=Total+N;
N:=N+1;
End Loop;
DBMS_output.put_line('Total = '||Total);
Avg1:= Total/10.0;
DBMS_output.put_line('Average = '||Avg1);
End;
/
////////////////////
--For Loop
Begin
for i in 1..10
Loop
DBMS_output.put_line(i);
End Loop;
End;
/
///////////////////
Declare
N Number:=1;
Total Number:=0;
Avg1 Number(5,2):=0;
Begin
DBMS_output.put_line('Base loop in PL/SQL to show 1 to 10 Numbers');
for i in 1..10
Loop
DBMS_output.put_line(N);
Total:=Total+N;
N:=N+1;
End Loop;
DBMS_output.put_line('Total = '||Total);
Avg1:= Total/10.0;
DBMS_output.put_line('Average = '||Avg1);
End;
/
///////////////////
