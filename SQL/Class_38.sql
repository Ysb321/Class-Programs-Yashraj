-- 1. group function/ multi rows function (single input single output)
-- 2. single row funtion / scalar function (multiple inputs then  multiple outputs)

select max(null), min('*') from dual;

select count(*) from employees;
select count('*') from employees;

select count(EMPLOYEE_ID) from employees;