

    select max(salary) from employees where salary < (select max(salary) from employees);

   -- SETS

    select * from employees INTERSECTS SELECT * from department;
    select * from employees UNION SELECT * from department;
    select * from employees UNION_ALL SELECT * from department;
    select * from employees MINUS SELECT * from department;



    select * from (select salary from employees order salary Desc) where Rownum < 3;

    select * from (select salary from employees order salary Desc) where Rownum < 2;

     select * from (select * from (select salary from employees order by salary Desc) where Rownum < 3 MINUS select * from (select salary from employees order by salary Desc) where Rownum < 2)

select * from employees where salary IN (select salary from employees where JOB_ID = 'PU_CLERK');

select * from employees where salary IN (select salary from employees where JOB_ID = 'PU_CLERK') AND JOB_ID <> 'PU_CLERK';

select salary, first_name from employees where salary > ALL (select salary from employees where JOB_ID = '
PU_CLERK');

select salary, first_name from employees where salary < ALL (select salary from employees where JOB_ID = '
PU_CLERK');

select salary, first_name from employees where salary >= ANY (select salary from employees where JOB_ID =
'PU_CLERK'); 



