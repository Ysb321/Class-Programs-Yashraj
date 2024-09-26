select *from employees where salary = 24000;
-- 
select employee_id, salary , commission_pct from employees where commission_pct
= .1;

-- data is case sensitive

select employee_id, first_name, salary, commission_pct, job_id from employees where upper(job_id) = upper('PU_Clerk'); -- IT will show rows it is not case sensitive

select employee_id, first_name, salary, commission_pct, job_id from employees where lower(job_id) = lower('PU_Clerk');

-- NULL is unpredictable value
select employee_id, first_name, salary, commission_pct from employees where commission_pct = NULL; -- we don't know what is null can't predict
-- null = null both are different we can't predict it.