
-- DQL
create table emp as select *from employees;

select *from emp where 1=1; -- filter the records according to data it will true it show all rows 
select *from emp where 1=2; -- filter the records according to data it will false

select *from emp where job_id = 'ST_CLERK'; -- all letter should be same as record uppercase or lowercase