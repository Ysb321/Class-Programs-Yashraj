--where clause:
--
--operators in SQL.
--
--1 Arithmatic operators.
--  + - * / %
--
--2 Relational Operators.
--  < > <= >= !=
--
--3 Logical Operators.
--    AND, OR, not
--
--4 NULL Value Operators.
--  IS NULL, IS NOT NULL
--
--5 SQL Operators.
-- LIKE, NOT LIKE
-- IN, NOT IN
-- BETWEEN, NOT BETWEEN 

select * from employees;

select *from dual; -- 1 coloum and 1 row 

select 1+1 from employees;

select 1+1 from employees where department_id=80;

select 50*(2+75)-25 from employees where department_id=80; // doing arithmatic calculation inside rows its value is 2 addition is 2;

select employee_id, first_name, salary, commission_pct, department_id from employees;

select employee_id, first_name, salary+500 as total, commission_pct, department_id from employees; // salary will be added by 500 then heading will change with total

select employee_id, first_name, salary+500 as total,salary *0.5 as HRA,salary *0.03 as TA,
salary+500 + salary*0.5 + salary*0.03 as Total_Salary, commission_pct, department_id from employees;

select mod(7,2) from dual; // mod use as modulus which is like reminder 7 % 2

select salary, salary*0.1 as tax, salary*0.05 as hra, salary*0.03 as ta,
((salary - salary*0.1)+ salary*0.05 + salary * 0.03) as "Total Salary" from employees;
