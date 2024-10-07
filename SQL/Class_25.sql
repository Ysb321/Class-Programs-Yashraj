select * from employees order by department_id, commission_pct; -- shorting data in assending order according to department id then commision_oct change;
select * from employees order by department_id asc, commission_pct; -- shorting data in assending order according to department id then commision_oct change;
select *from employees order by department_id desc, commission_pct, employee_id; -- shorting data in descending order according to department id then commision_oct change;

update employees set commission_pct  = 0.5 where employee_id = 112; -- update value;

-- in assending order NULL goes to last
-- in descending order NULL goes to first