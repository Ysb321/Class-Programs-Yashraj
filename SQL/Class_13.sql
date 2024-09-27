select *from employees where job_id = 'SH_CLERK' AND salary > 3000;

select *from employees where salary <> 11000; -- <> and != both are same

select *from employees where job_id = 'SH_CLERK' AND job_id = 'ST_CLERK'; -- check both in one row rows so it will be 'no rows selected'

select *from employees where job_id = 'SH_CLERK' OR job_id = 'ST_CLERK'; -- show results of both

