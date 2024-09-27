-- 'drop' to delete any database objects(table, function, procedure, trigger, view, constrains, packages, database)4

create table T2 as select *from product;

show tables; -- showing all table from database

drop table T2; -- delete structure as well as data

-- 'delete' DML command one or more all rows from a table temporarly

delete from t1;

select *from employees;

create table yash2 as select *from employees;

select first_name, last_name, SALARY, salary*3 as New_salary, salary+4000 as bonus_salary, (salary*3) + salary+4000 as Total_Salary from yash2;
