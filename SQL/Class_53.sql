select e.employee_id, e.first_name, e.salary, e.department_id, d.department_name from Employees e INNER JOIN departments d ON(e.department_id = d.department_id) where e.salary > (select AVG(salary) from employees where department_id = 80) order by d.department_id, d.department_name;

select d.department_id, d.department_name, count(*) staff, sum(e.salary) TOTAL from employees e INNER JOIN departments d ON(e.department_id = d.department_id) where d.department_name <> 'IT' GROUP BY d.department_id, d.department_name having count(*)>6 order by d.department_name desc;

select s.sid, s.sname, c.cid, c.cname, e.edate from Student3 s INNER JOIN Enrollment e ON(e.sid = s.sid) INNER JOIN  Course c ON(e.cid = c.c
id);

select s.sid, c.cname, count(s.sid) NS from Course c Inner Join enrollment e ON(c.cid = e.cid) INNER JOIN Student3 s ON(s.sid = e.sid) Group by s.sid, c.cname;

select s.sid, e.cid, count(*) NS from Course c Inner Join enrollment e ON(c.cid = e.cid) INNER JOIN Student3 s ON(s.sid = e.sid) Group by e.
cid, s.sid;