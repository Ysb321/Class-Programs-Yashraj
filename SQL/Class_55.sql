--view( It contains rows and columns just like a real table, and the fields in a view are fields from one or more real tables in the database.)
create view EMPV as SELECT * FROM EMPLOYEES;

select * from (select * from employees); -- view is same as that subquery present in bracket

create view DEPT50 as select * from emp where department_id = 50; -- creating veiw dept50 from department_id of emp table

update dept50 set department_id = 60 where Employee_id = 198;

create view DEPT50 as select * from emp where department_id = 50 with check option;

update dept50 set department_id = 60 where Employee_id = 197;

create view DeptCOMPLEX as select departments.department_id, department_name, count(department_name) staff, sum(salary) TOTAL, locations.city from departments, employees, locations where departments.department_id = employees.department_id and Locations.Location_id = departments.Location_id GROUP BY (departments.department_id, department_name, locations.city); -- large query of join now create its view so we don't have to type complete table

select * from DeptCOMPLEX;

select * from DeptCOMPLEX where staff >= 34;

create view empvro as select * from employees where department_id = 50;

create view empvro as select * from employees where department_id = 50 with read only;

delete from empvro;