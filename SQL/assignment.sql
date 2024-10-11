select salary, (salary+500) as increased_salary from employees;
select salary, (salary-200) as substracted_salary from employees;
select salary, (salary*1.2) as multiplied_salary from employees;
select salary, (salary/2) as divided_salary from employees;

select * from employees where salary = 5000;
select * from employees where salary != 5000;
select * from employees where salary > 6000;
select * from employees where salary < 4000;
select * from employees where salary >= 3000;
select * from employees where salary <= 2500;
select * from employees where department_id = 50;
select * from employees where job_id = 'SA_REP';

select * from employees where department_id = 60 and salary > 5000;
select * from employees where deparment_id = 60 and commission_pct > 0.2;
select * from employees where department_id != 90;