/*
    Group Functions
    Max()
    Min()
    Count()
    Sum()
    Avg()

*/
-- group function neglets the NULL values.

alter session set nls_date_format = 'DD-MON-YYYY HH-MI-SS';

select sysdate from dual;

select sum(salary) from employees; -- addition of all employees salary
select Avg(salary) from employees; -- addition of all employees salary
select Avg(nvl(COMMISSION_PCT, 0)) from employees; -- addition of all commision_pct if there is null then it will replace to 0.

select count(*) from EMPLOYEES; -- it will count all rows in table.
select count(COMMISSION_PCT) from EMPLOYEES; -- it will count all rows in table.
select count(0) from EMPLOYEES; --  0 can be count so it will count all rows.
select count(NULL) from EMPLOYEES; -- 0
select max(salary), min(salary) from employees;
select max(hire_date), min(hire_date) from employees;

