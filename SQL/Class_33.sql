-- To_char(): function is used to convert any date in the character/string format for Description/Reading purpose.
/*

yyyy:- four digit year format e.g. 1999,2000, 2020
MON:- Month name e.g. JAN, FEB, MARCH, APRIL etc
Year:- full month name e.g. MARCH, APRIL etc.
DDth:- date in xth format e.g 1st, 2nd, 4th
DDsp:- datespelled out eg. first, second,fourth.
d:- Numeric day Number for the day eg. sunday -> 1.

syntax: DELETE

To_char(Date, 'Format');

WHERE

date: is any date in the form of  'DD-MON-YYYY' format.

Format:

dd:- date in two digit 01,03
MM- month in two format 01,02,03
yy- year in 00, 01,24,99


*/

select sysdate, to_char(sysdate, 'DD-MON-YYYY') from dual;

select sysdate, to_char(sysdate, 'DD-MONTH-YYYY') from dual;
select sysdate, to_char(sysdate, 'DD DAY MONTH YYYY') from dual;
select sysdate, to_char(sysdate, 'DD DAY MONTH YYYY') as DAY from dual;
select sysdate, to_char(sysdate, 'DD day month Year') as DAY from dual;
select '15-AUG-2000', to_date('15-AUG-2000', 'DD-MON-YYYY') as DAY from dual; -- convert into original format
select '15-AUG-2000' as Birth_DAY, to_char(to_date('15-AUG-2000', 'DD-MON-YYYY'), 'DAY') as DAY from dual;

select '15-AUG-2000', to_char(to_date('15-AUG-2000', 'DD-MON-YYYY'), 'DDsp') as DAY from dual;
select '15-AUG-2000', to_char(to_date('15-AUG-2000', 'DD-MON-YYYY'), 'DDth') as DAY from dual;
select '15-AUG-2000', to_char(to_date('15-AUG-2000', 'DD-MON-YYYY'), 'YEAR') as DAY from dual;
select '15-AUG-2000', to_char(to_date('15-AUG-2000', 'DD-MON-YYYY'), 'd') as DAY from dual;
select '15-AUG-2000', to_char(to_date('15-AUG-2000', 'DD-MON-YYYY'), 'DAY') as DAY from dual;

select  to_date('2000/10/22', 'yyyy/mm/dd') as DAY from dual; -- it will show original format.
select to_char()