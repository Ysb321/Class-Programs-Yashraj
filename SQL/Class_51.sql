/*
    JOINS 
    (atleast one common column in both table, datatype should be same)
    1. Cross JOIN
    2. Natural JOIN
    3. Inner JOIN
    4. Outer JOIN
    - Left OUTER
    - Right Outer JOIN
    - Full outer JOIN
    5. EquiJoin
    6. non EquiJoin
    7. self JOIN 



    
    
    */

    --  CROSS JOIN (join same column of two table then attach all records from 1 table to second table)

    select colname1, colname2,.......colnamen
    from table_name1
    CROSS JOIN
    table_name2
    [where|order by|GROUP BY]

     select employee_id, first_name, salary, job_id, employees.manager_id, departments.department_id, departments.department_name from departments CROSS JOIN employees;

     select employee_id, first_name, salary, job_id, employees.manager_id, departments.department_id, departments.department_name from departments CROSS JOIN employees where departments.department_id = employees.department_id;

    --JOIN CONDITION
     select employee_id, first_name, salary, job_id, e.manager_id, d.department_id, d.department_name from departments d CROSS JOIN employees e where d.department_id = e.department_id;

     --

