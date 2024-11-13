-- 1. group function/ multi rows function (single input single output, multiple inplut then multiple output)
-- 2. single row funtion / scalar function (multiple inputs then single outputs)

select max(null), min('*') from dual;

select count(*) from employees;
select count('*') from employees;

select count(EMPLOYEE_ID) from employees;