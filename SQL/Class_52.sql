-- Natural JOIN (in natural join common column join automaticaly) (column name and datatype should be same in both table)

select department_id, d.department_name, e.employee_id, e.first_name, e.salary from DEPARTMENTS d Natural JOIN EMPLOYEES e; -- IN Natural Join common column don't have qualifier

select department_id, d.department_name, e.employee_id, e.first_name, e.salary from DEPARTMENTS d Natural JOIN EMPLOYEES e where salary > (select avg(salary) from employees);

select department_id, d.department_name, sum(salary) total from employees e NAtural JOIN departments d GROUP by departme
nt_id, d.department_name having sum(e.salary) > 2500 order by department_id desc;

select d.department_id, d.department_name, sum(salary) total from employees e CROSS JOIN departments d where d.department_id = e.department_id and e.manager_id = d.manager_id GROUP by d.department_id, d.department_name having sum(e.salary) > 2500 order by d.department_id desc;

--INNER JOIN

select d.department_id, d.department_name, e.salary total from employees e INNER JOIN departments d on(d.department_id =
e.department_id) ;

select employee_id, first_name, salary, departments.department_id, department_name from departments INNER JOIN employees on(departments.department_id = employees.department_id
) where salary > 15000;

select employee_id, first_name, salary, departments.department_id, department_name, locations.city from departments INNER JOIN employees  on(departments.department_id = employees.department_id) INNER JOIN locations on(Locations.Location_id = departments.Location_id);

select employee_id, first_name, salary, departments.department_id, department_name, locations.city, Countries.Country_Name from departments INNER JOIN employees  on(departments.department_id = employees.department_id) INNER JOIN locations on(Locations.Location_id = departments.Location_id) INNER JOIN Countries on(Countries.Country_id = Locations.Country_id);

select locations.city, Countries.Country_Name, count(*) as staff, SUM(employees.salary) as total_salary from departments INNER JOIN employees  on(departments.department_id = employees.department_id) INNER JOIN locations on(Locations.Location_id = departments.Location_id) INNER JOIN Countries on(Countries.Country_id = Locations.Country_id) group by locations.city, countries.country_name;

select locations.city, Countries.Country_Name, count(*) as staff, SUM(employees.salary) as total_salary from departments INNER JOIN employees  on(departments.department_id = employees.department_id) INNER JOIN locations on(Locations.Location_id = departments.Location_id) INNER JOIN Countries on(Countries.Country_id = Locations.Country_id) group by locations.city, countries.country_name having count(*) > 5;
