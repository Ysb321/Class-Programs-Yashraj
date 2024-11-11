alter session set nls_date_format = 'DD-MM-YYYY'; -- Nationalize Language Support 

select * from employees;

select months_between('21-NOV-2009','23-APR-2007') from dual; -- show number of moths between to dates

select round(months_between('21-NOV-2008','23-APR-2007')) from dual;

select round((months_between(sysdate,'15-AUG-2000'))/12) as ToTal_Years from dual;

select EMPLOYEE_ID, first_name, HIRE_DATE, round((months_between(sysdate,'15-AUG-2000'))/12) as ToTal_Years from employees;

select * from EMPLOYEES  ;

select EMPLOYEE_ID, first_name, HIRE_DATE, round((months_between(sysdate, hire_date))/12) as Total_years from employees where (round((months_between(sysdate, hire_date))/12) > 20);

select EMPLOYEE_ID, first_name, HIRE_DATE, round((months_between(sysdate, hire_date))/12) as Total_years from employees where (round((months_between(sysdate, hire_date))/12) > 20) order by Total_years desc;

select EMPLOYEE_ID, first_name, HIRE_DATE, salary, department_id, round((months_between(sysdate, hire_date))/12) as Total_years from employees where round((months_between(sysdate, hire_date))/12) > 20 and (salary>18000) and (department_id  in(60,70,80,90)) order by Total_years ;

