select first_name, last_name,hire_date, to_char(hire_date, 'DD-MON-YYYY') as Hire_new_date from employees;

select first_name, last_name, hire_date, to_char(hire_date, 'Day-MON-YYYY') as hire_new_date from employees;

select first_name, last_name, hire_date as "Joining Date", to_char(hire_date, 'Day') as "Joinning day",to_char(hire_date, 'Ddsp, Ddth, Month, Year')from employees where to_char(hire_date, 'Day') = 'Wednesday';

select first_name, last_name, hire_date as "Joining Date", to_char(hire_date, 'Day') as "Joinning day",to_char(hire_date, 'Ddsp, Ddth, Month, YYYYsp')from employees where to_char(hire_date, 'Day') = 'Wednesday';