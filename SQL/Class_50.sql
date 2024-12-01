select * from departments EXIT (select DEPARTMENT_ID from employees where DEPARTMENT_ID = depatments.department_id);

SELECT * from EMPLOYEES;

select * from DEPARTMENTS;

select * from EMPLOYEES e where salary > (select salary from employees where EMPLOYEE_ID = e.MANAGER_ID);
select * from EMPLOYEES e where salary > (select min(salary) from employees where department_id = e.department_id);