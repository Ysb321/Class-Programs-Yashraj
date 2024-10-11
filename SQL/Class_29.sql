select lpad('Yashraj', 12, '*') from dual;
select rpad('Yashraj', 12, '*') from dual;
select lpad(' Yashraj', 11, '*') || rpad(' ', 4, '*') from dual; -- putting * to left side and right side || is concat

select 'ganesh', initcap('ganesh') from dual; -- initial letter of name will capital

select first_name, initcap(first_name) from employees; -- first letter will be capital from first_name.

select 'Ganesh', translate('Ganesh', 'esh', 'pat') from dual; -- esh from Ganesh will change to pat.

select length('oracle corporation') from dual; -- count all the characters in the string include space.

select first_name, length(first_name) as count from employees;

select first_name, length(first_name) from employees where length(first_name) > 6;

select first_name, length(first_name) from employees where first_name like '%x%' and length(first_name) > 6 ; -- x will included in first_name and length will more than 6.

select first_name, length(first_name) from employees where first_name like '%_' and length(first_name) > 6 ; 

select first_name, length(first_name) from employees where first_name like '_____\_'Escape'\' and length(first_name) = 6 ; -- six letter is _ then we have to \ in six position

select first_name, job_id, length(first_name) from employees where job_id like '__\_%'Escape'\' and length(first_name) > 5; -- '_' present on third position 

