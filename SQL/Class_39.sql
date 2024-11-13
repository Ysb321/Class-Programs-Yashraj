-- Group By 

select department_id, sum(salary) as Total, count(*) as Staff from employees Group By department_id; -- group by will make group of same department_id  then
-- show total sum of there salary and count will count number of employees in that group

select job_id, sum(salary) as Total, count(*) as Staff from employees Group By JOB_ID;

select * from employees;

select department_id, job_id, sum(salary) as Total, avg(salary), count(*) as Staff from employees Group By JOB_ID, DEPARTMENT_ID; --  there must be two groups for compare

select department_id, job_id, sum(salary) as Total, avg(salary), count(*) as Staff from employees Group By DEPARTMENT_ID, job_id order by department_id;

select department_id, job_id, sum(salary) as Total, avg(salary), count(*) as Staff from employees where job_id NOT IN('SH_CLERK', 'ST_CLERK') Group By DEPARTMENT_ID, job_id order by department_id;

select department_id, job_id, sum(salary) as Total, avg(salary), count(*) as Staff from employees where job_id != 'SH_CLERK' and job_id != 'ST_CLERK' Group By DEPARTMENT_ID, job_id order by department_id;

select department_id, job_id, sum(salary) as Total, avg(salary), count(*) as Staff from employees having count(*) >= 20 Group By DEPARTMENT_ID, job_id order by depart
ment_id;

select department_id, job_id, sum(salary) as Total, avg(salary), count(*) as Staff from employees where job_id != 'SH_CLERK'  having count(*) >= 20 Group By DEPARTMEN
T_ID, job_id order by department_id;