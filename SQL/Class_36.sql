select employee_id, first_name,phone_number, nvl(phone_number, 'Phone Number is not given') from employees; -- phone_number is varchar2 so giving it string so  where is null in phone_number then it will change to Phone NUmber is not given. this function is ANSI standered 

select employee_id, salary, commission_pct, nvl(commission_pct, 0), salary+salary*COALESCE(commission_pct, 0) as Total from employees; -- nvl and coalesce  both are same, where coalesce follow ANSI standerds and nvl,nvl2 are oracle standerds;

COALESCE(PHONE_NUMBER, COMMISSION_PCT, 0) -- it will run if both coloum having same datatype

NVL(PHONE_NUMBER, COMMISSION_PCT, 0) -- In nvl it will not run bcoz it having more than two expressions

select employee_id, salary, commission_pct, nvl2(commission_pct, 0.3, 0.2), salary+salary*nvl2(commission_pct, 0.3, 0.2) as Total from employees; -- in nvl2 if commission_pct having null then it will replace to 0.2 otherviews 0.3.