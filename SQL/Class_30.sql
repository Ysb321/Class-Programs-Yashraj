select mod(5, 2) from dual; -- mod use to getting remainder where 5 is base number and 2 is divided number.

select * from employees where (hire_date between '01-JAN-2001' AND '31-DEC-2001') OR (hire_date between'01-JAN-2003' AND '31-DEC-2003') OR (hire_date between '01-JAN-2003' AND '31-DEC-2003'); -- same coloumn so used OR between hire_date

select sysdate from dual; -- current hire_date

select sysdate, next_day(sysdate,'Tuesday') from dual; 
select sysdate, next_day(sysdate,'Monday') from dual; -- next day
select sysdate, last_day(sysdate) from dual; -- it show last day of current month
