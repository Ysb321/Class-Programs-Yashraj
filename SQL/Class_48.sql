--SUBQUERIES (It is combination of multiple queries)

/*

1.Single Row SUBQUERY.
2.Subquery in the from clause. (inline view)
3.Multi column Subquery.
4.Core related subquery.



(q1(q2))  first q2 will exucute then q1


select * from employees where department_id = (select department_id from departments where lower(department_name) = lower('&dname'));

select * from employees where salary >= (select avg(salary) from employees);

select * from employees where job_id = (select first_name from employees where lower(first_name) = lower('Steven'));
select * from employees where job_id = (select job_id from employees where lower(first_name) = lower('Den'));
*/

