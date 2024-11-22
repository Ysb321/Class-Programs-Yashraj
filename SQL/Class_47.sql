 
 
 
 create table dept2(deptno number primary key, dname varchar(20));

 create table emp3(empno number primary key, fname varchar(20) NOT NULL, sal number(8,2), deptno number references dept2(deptno) ON DELETE SET NULL); -- on delete set null on foreign key - when we delete a row from  primary key then if that value is use in FOREIGN key then that value in foreign key become null;

 delete dept2 where deptno = 101;

 create table emp3(empno number primary key, fname varchar(20) NOT NULL, sal number(8,2), deptno number references dept2(deptno) on delete CASCADE);  -- on delete Cascade - when we delete a row from primary key then if that value present in foreign key then that row  in foreign key will delete; 

creATE TABLE t as select * from emp3;
 insert into t(select * from emp3); 

 alter table 

 SELECT * from emp3;
 select * from dept2;

 alter table t add constraints tfk foreign key(deptno) references dept2(deptno) on delete CASCADE;

 insert into t(select * from emp3);

 update t set deptno = 103 where deptno is NULL;

 delete dept2  where deptno = 102 ;

 select * from t;