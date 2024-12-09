
--Self Join (joining column of same table)
select e.employee_id, e.first_name, e.salary, e.manager_id, m.first_name, m.salary from employees e INNER JOIN employees m ON(e.Manager_id = m.employee_id) where e.salary > all (selec
t m.salary from employees);

select e.employee_id, e.first_name, e.salary, e.manager_id, m.first_name, m.salary from employees e INNER JOIN employees m ON(e.Manager_id = m.employee_id) where e.salary > m.SALARY;

--Equi JOIN (filter and condition are both in where)
select e.employee_id, e.first_name, e.salary, e.manager_id, m.first_name, m.salary from employees e , employees m  where e.Manager_id = m.employee_id and e.salary > all (select m.sala
ry from employees);

select employee_id, first_name, salary, departments.department_id, department_name, locations.city from departments, employees, locations where departments.department_id = employees.department_id and Locations.Location_id = departments.Location_id

select departments.department_id, department_name, count(department_name) staff, sum(salary) TOTAL, locations.city from departments, employees, locations where departments.department_id = employees.department_id and Locations.Location_id = departments.Location_id GROUP BY (departments.department_id, department_name, locations.city);

--Left Outer Join (It will show unmached records from left side table)

select d.department_id, d.department_name, e.employee_id, e.first_name,e.salary from departments d LEFT OUTER JOIN employees e ON(e.department_id = d.department_id); -- departments is left side table

--Right Outer JOin (It will show unmached records from Right side table)

select d.department_id, d.department_name, e.employee_id, e.first_name,e.salary from employees e Right OUTER JOIN departments d ON(e.department_id = d.department_id);

-- NON-Equi JOin

select e.employee_id,e.first_name, e.salary, b.G from employees e, bonus b where e.salary BETWEEN b.low_salary and b.high_salary;