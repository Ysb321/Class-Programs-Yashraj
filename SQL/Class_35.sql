update employee set First_name = '_prathmesh' where employees_id = 109;

select employee_is, salary ,COMMISSION_PCT, (salary+(salary*COMMISSION_PCT)) as Total from employees;

SQL> select employee_id, salary, commission_pct, nvl(commission_pct, 0), salary+salary*nvl(commission_pct, 0) as Total from employees; -- nvl will check where is null vaue in commision_pct then change it to 0