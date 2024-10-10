select power(5,3) from dual; -- power function
select power(0, 0) from dual;
select power(&a, &b) from dual; -- &a &b will give values of a and b from user they are substitutional variable.

select trunc(-8.789) from dual; -- trunc remove all the number from decimal it is similar to floor
select trunc(&a) from dual;

select substr('MYTECHFOCUS', 3) from dual; -- it will print TECHFOCUS start 3 letter.
select substr('MYTECHFOCUS', 3, 4) from dual; -- start from 3rd letter then stop 4th letter (second number is number of letters)

select substr('MYTECHFOCUS', -5, 2) from dual; -- left to right positive and right to left negative (second number always positive)

select * from employees where EMPLOYEE_ID = 153;

select substr(first_name, 3, 3) from employees; -- first 3 letters from first_name

select instr('Yashraj', 's') from dual;

SELECT instr('Yashraj', 'a') from dual; -- it will take first 'a' position

SELECT instr('Rubber is rubber', 'r', 1 , 2) from dual; -- it will show second 'r' position which is 11.

SELECT instr('Rubber is rubber', 'r', 11 , 2) from dual; -- it will show third 'r' position  11 is second r position

SELECT instr('Rubber is rubber', 'r', -2, 2) from dual;  -- it will show second 'r' so answer is 6

select instr(first_name, 'e', 3) from EMPLOYEES;

select instr(first_name, 'e', 3), first_name from EMPLOYEES;

select first_name from employees where instr(first_name, 'e') = 3; -- show all the first name where 'e' present at 3rd position.

select first_name from employees where instr(first_name, 'e', -1, 2) = 3;

