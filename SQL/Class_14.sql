 
-- IN OPERATOR
select *from employees where salary in(8000, 2800) and job_id = 'SH_CLERK';
select *from employees where  SALARY =2800 OR  SALARY =8000;

-- NOT IN
 select *from employees where job_id NOT IN('IT_CLERK', 'SH_CLERK', 'PU_CLERK') and salary > 6000; -- smililar like  below
 select *from employees where job_id <> 'IT_CLERK' and job_id <> 'SH_CLERK' and job_id <> 'PU_CLERK' and salary > 6000;