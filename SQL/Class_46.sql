-- primary key apply only once in table but we can combine column like primary key (locId, loc) their are two column

-- foreign key only apply on primary key and unique key
-- if their is parent then only child can set in foreign key

SQL> create Table dept1(
  2  deptno number,
  3  dname varchar(20) Not null,
  4  Location varchar(20),
  5  constraint pkdept primary key(deptno));


   CREATE TABLE emp2 (
  2      empno NUMBER,
  3      ename VARCHAR2(20) NOT NULL,
  4      lname VARCHAR2(15),
  5      job VARCHAR2(15),
  6      MGR NUMBER,
  7      salary NUMBER(8,2),
  8      deptno NUMBER,
  9      CONSTRAINT empnopk PRIMARY KEY (empno),
 10      CONSTRAINT chkjob CHECK (job IN ('IT_PROG', 'IT_MAN', 'PU_CLERK')),
 11      CONSTRAINT chksal CHECK (salary > 0 AND salary <= 30000),
 12*     CONSTRAINT empdeptfk FOREIGN KEY (deptno) REFERENCES dept1(deptno));


insert into dept1(101, 'Yash', 'B', 'Pune');

insert into emp2(101, 'Yashraj', 'B', 'devloper', 102, 20000, 101); -- deptno should be 