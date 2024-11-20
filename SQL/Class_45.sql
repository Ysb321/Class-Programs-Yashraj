--  foreign key is getting refference from primary key from another table

-- foreign key is integrity constraint

-- foreign key column values should present in primary key of another table

create Table Employees2(empid Number primary key,
fname varchar(12) not null,
lname varchar(12) not null,
mgr Number REFERENCES Employees2(empid),
job varchar(12) NOt NULL,
salary Number(8,2),
depNo number REFERENCES department(deptno)); -- references department(deptno) is foreign key and reference Employees2(empid) is self reference foreign key;